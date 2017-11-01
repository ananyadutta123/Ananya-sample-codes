% This Matlab code performs segmentation of a 3D cell volume along the line of
% mitotic cell division and determines ratio of intensity of Synemin and Vimentin
% proteins in the right and left daughter cell, expressed as percentage of the whole. This helps us determine if
% the proteins are equally divided in the left and right daughter cell
%
% Ananya Dutta

clear all; 
close all; 
clc;

for n = 1:100% reading the 3D image which is stored in tif format
    
   if n<10
        
        DNA(:,:,n) = imread(['u373_mitotic-syn&vim-z003z00' num2str(n) 'c1.tif']);
        SYNEMIN(:,:,n) = imread(['u373_mitotic-syn&vim-z003z00' num2str(n) 'c2.tif']);
        VIMENTIN(:,:,n) = imread(['u373_mitotic-syn&vim-z003z00' num2str(n) 'c3.tif']);
        
   elseif (n>9)&&(n<=99)
            
        DNA(:,:,n) = imread(['u373_mitotic-syn&vim-z003z0' num2str(n) 'c1.tif']);
        SYNEMIN(:,:,n) = imread(['u373_mitotic-syn&vim-z003z0' num2str(n) 'c2.tif']);
        VIMENTIN(:,:,n) = imread(['u373_mitotic-syn&vim-z003z0' num2str(n) 'c3.tif']);
        
    else 
           
       DNA(:,:,n) = imread(['u373_mitotic-syn&vim-z003z' num2str(n) 'c1.tif']);
       SYNEMIN(:,:,n) = imread(['u373_mitotic-syn&vim-z003z' num2str(n) 'c2.tif']);
       VIMENTIN(:,:,n) = imread(['u373_mitotic-syn&vim-z003z' num2str(n) 'c3.tif']); 
    end     
                
end
             
%% separating left daughter cell-SYNEMIN

synemin_mask_cell_1 = imread('u373_leftmask_manual.png');% creating a mask for segmentation
synemin_mask_cell_1 = double(rgb2gray(imresize(synemin_mask_cell_1,[512 512])));% resizing mask size to original dimension of 3D image
synemin_mask_cell_1(synemin_mask_cell_1<200) = 0; % converting pixels having less than intensity=200 into intensity=0
synemin_mask_cell_1 = synemin_mask_cell_1./max(synemin_mask_cell_1(:)); %normalizing the intensity values to maximum 1
imshow(synemin_mask_cell_1);

for n = 1:100
    SYNEMIN_CELL_1(:,:,n) = double(SYNEMIN(:,:,n)).*synemin_mask_cell_1;
end

Intensity_SYNEMIN_CEll1=sum(SYNEMIN_CELL_1(:)); %determining total synemin intensity of left daughter cell 

%% separating right daughter cell-SYNEMIN

synemin_mask_cell_2 = imread('u373_rightmask_manual.png');% creating a mask for segmentation
synemin_mask_cell_2 = double(rgb2gray(imresize(synemin_mask_cell_2,[512 512])));% resizing mask size to original dimension of 3D image
synemin_mask_cell_2(synemin_mask_cell_2<200) = 0; % converting pixels having less than intensity=200 into intensity=0
synemin_mask_cell_2 = synemin_mask_cell_2./max(synemin_mask_cell_2(:)); %normalizing the intensity values to maximum 1
imshow(synemin_mask_cell_2);

for n = 1:100
    SYNEMIN_CELL_2(:,:,n) = double(SYNEMIN(:,:,n)).*synemin_mask_cell_2;
end

Intensity_SYNEMIN_CEll2=sum(SYNEMIN_CELL_2(:));%determining total synemin intensity of right daughter cell 

%% separating left daughter cell-VIMENTIN

vimentin_mask_cell_1 = imread('u373_leftmask_manual.png');
vimentin_mask_cell_1 = double(rgb2gray(imresize(vimentin_mask_cell_1,[512 512])));
vimentin_mask_cell_1(vimentin_mask_cell_1<255) = 0; 
vimentin_mask_cell_1 = vimentin_mask_cell_1./max(vimentin_mask_cell_1(:)); 
imshow(vimentin_mask_cell_1);

for n = 1:100
    VIMENTIN_CELL_1(:,:,n) = double(VIMENTIN(:,:,n)).*double(vimentin_mask_cell_1);
end

Intensity_VIMENTIN_CEll1=sum(VIMENTIN_CELL_1(:));%determining total vimentin intensity of left daughter cell 

%% separating right daughter cell-VIMENTIN

vimentin_mask_cell_2 = imread('u373_rightmask_manual.png');
vimentin_mask_cell_2 = double(rgb2gray(imresize(vimentin_mask_cell_2,[512 512])));
vimentin_mask_cell_2(vimentin_mask_cell_2<255) = 0; 
vimentin_mask_cell_2 = vimentin_mask_cell_2./max(vimentin_mask_cell_2(:)); 
imshow(vimentin_mask_cell_2);

for n = 1:100
    VIMENTIN_CELL_2(:,:,n) = double(VIMENTIN(:,:,n)).*double(vimentin_mask_cell_2);
end

Intensity_VIMENTIN_CEll2=sum(VIMENTIN_CELL_2(:));%determining total vimentin intensity of right daughter cell 

%% Ratios

Ratio_SYNEMIN1=(Intensity_SYNEMIN_CEll1*100)/(Intensity_SYNEMIN_CEll1+Intensity_SYNEMIN_CEll2);%Synemin ratio in the left cell
Ratio_SYNEMIN2=(Intensity_SYNEMIN_CEll2*100)/(Intensity_SYNEMIN_CEll1+Intensity_SYNEMIN_CEll2);%Synemin ratio in the right cell

Ratio_VIMENTIN1=(Intensity_VIMENTIN_CEll1*100)/(Intensity_VIMENTIN_CEll1+Intensity_VIMENTIN_CEll2);%Vimentin ratio in the left cell
Ratio_VIMENTIN2=(Intensity_VIMENTIN_CEll2*100)/(Intensity_VIMENTIN_CEll1+Intensity_VIMENTIN_CEll2);%Vimentin ratio in the right cell
