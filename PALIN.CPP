/* This code outputs if a string is a palindrome or not */
/* A palindrome is a string that is read the same in both directions*/
/* Ananya Dutta*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 char str[30];
 int i,n,j,flag=1;
 gets(str);
 for(i=0;str[i]!='\0';i++)
 n=i+1;
 for(i=0;i<n/2;i++)
 {
 if(str[i]!=str[n-i-1])
 {flag=0;/*flag becomes zero if string is not a palindrome and control goes out of the loop*/
 break;
 }
 }
 if(flag==1) cout<<"palindrome";
 getch();
 }
