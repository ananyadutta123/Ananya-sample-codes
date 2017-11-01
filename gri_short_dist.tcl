#This code creates Grid Topology for movement of nodes using TCP protocol in ns2
#This code has been implemented in Ubuntu in Unix environment
#Ananya Dutta



# GRID TOPOLOGY

# ======================================================================
# Define options
# ======================================================================
set val(chan)           Channel/WirelessChannel    ;# channel type
set val(prop)           Propagation/TwoRayGround   ;# radio-propagation model
set val(netif)          Phy/WirelessPhy            ;# network interface type
set val(mac)            Mac/802_11                 ;# MAC type
set val(ifq)            Queue/DropTail/PriQueue    ;# interface queue type
set val(ll)             LL                         ;# link layer type
set val(ant)            Antenna/OmniAntenna        ;# antenna model
set val(ifqlen)         50                         ;# max packet in ifq
set val(nn)             49                         ;# number of mobilenodes
set val(rp)             DSDV                       ;# routing protocol
set val(x)		3000.0			   ;
set val(y)		3000.0			   ;

# ======================================================================
# Main Program
# ======================================================================

#
# Initialize Global Variables
#
set ns	[new Simulator]
set tracefile     [open ex1.tr w]
set namtrace [open ex1.nam w]
$ns use-newtrace 
$ns trace-all $tracefile
$ns namtrace-all-wireless $namtrace $val(x) $val(y)

#############################################
# Topology
#######################################
set topo       [new Topography]

#$topo load_flatgrid $val(x) $val(y)

$topo load_flatgrid $val(x) $val(y)

#$topo load_flatgrid 500 500

###########################################
#
# Create God
######################
create-god $val(nn)

################
# configure node
#################
$ns node-config -adhocRouting $val(rp) \
			 -llType $val(ll) \
			 -macType $val(mac) \
			 -ifqType $val(ifq) \
			 -ifqLen $val(ifqlen) \
			 -antType $val(ant) \
			 -propType $val(prop) \
			 -phyType $val(netif) \
			 -channelType $val(chan) \
			 -topoInstance $topo \
			 -agentTrace ON \
			 -routerTrace ON \
			 -macTrace ON \
			 -movementTrace ON

####################
#generating nodes
##################

for {set i 0} {$i < $val(nn) } {incr i} {
		set node_($i) [$ns node]	
		$node_($i) random-motion 0		;# disable random motion
	}

###################################
# 
# Provide initial (X,Y, for now Z=0) co-ordinates for mobilenodes 
# 
	set a 0 
	set b 0 
	set c 0 
	for {set i 0} {$i < $val(nn) } {incr i} { 
		$node_($i) set X_ $a 
		$node_($i) set Y_ $b 
		$node_($i) set Z_ $c	 
		set a [expr ($a)+100] 
		if { $a > 700 } { 
			set a 0 
			set b [expr ($b)+100] 
		}		 
	} 

###############################
# Initial NAM positions
# Define node initial position in nam

############################


for {set i 0} {$i < $val(nn)} {incr i} {
        $ns initial_node_pos $node_($i) 60
} 

#################################
# Setup traffic flow between nodes
# TCP connections between node_(0) and node_(1)

set tcp1 [new Agent/TCP]
$ns attach-agent $node_(36) $tcp1
set sink1 [new Agent/TCPSink]
$ns attach-agent $node_(38) $sink1
$ns connect $tcp1 $sink1
set ftp1 [new Application/FTP]
$ftp1 attach-agent $tcp1

#set tcp2 [new Agent/TCP]
#$ns attach-agent $node_(1) $tcp2
#set sink2 [new Agent/TCPSink]
#$ns attach-agent $node_(2) $sink2
#$ns connect $tcp2 $sink2
#set ftp2 [new Application/FTP]
#$ftp2 attach-agent $tcp2


$ns at 2.0 "$ftp1 start"
#$ns at 2.0 "$ftp2 start"
 

#


####################################
#
# Tell nodes when the simulation ends
#
for {set i 0} {$i < $val(nn) } {incr i} {
    $ns at 10.0 "$node_($i) reset";
}
$ns at 10.0 "stop"

proc stop {} {
    global ns tracefile namtrace
    $ns flush-trace
    exec nam ex1.nam &  
    close $tracefile
    close $namtrace
}

$ns run












