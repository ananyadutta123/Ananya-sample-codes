/*This code reverses the data in an array*/
/*Ananya Dutta*/

#include<iostream.h>
#include<conio.h>
void main()
{
	int a[20],i,j,n,temp;
	cout<<"enter number of digits in array\n"; 
	cin>>n;
	cout<<"\n enter values  for an array";
	for(i=0;i<n;i++)
       {
	cin>>a[i];/* inputing values in array*/
	}
	cout<<"\narray reverse\n";
	for(j=i-1;j>=0;--j)
	cout<<a[j]<<"\t";/*outputting reversed array*/
	j=n;
	for (i=0;i<n/2;i++)
	{
	temp=a[i];
	a[i]=a[j-1];/*storing reversed array in original array*/
	a[j-1]=temp;
	j--;
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";/*outputting reversed array*/



getch();
}