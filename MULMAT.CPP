/*This code multiplies two matrices*/
/*Ananya Dutta*/

#include<iostream.h>
#include<conio.h>
 #include<process.h>
      void main()
      {
      int m,n,p,q,i,j,k;/*matrix dimensions*/
      float a[10][10],b[10][10],c[10][10];
      cin>>m>>n;
      cin>> p>>q;
      if(n!=p)
      {
      cout<<"not multiplicable\n";/*matrix dimensions must agree to be multiplicable*/
      getch();
      exit(0);/* exit execution*/
      }
      for (i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
      cin>>a[i][j];
      }
      for(i=0;i<p;i++)
      {
      for(j=0;j<q;j++)
      cin>>b[i][j];
      }
      for (i=0;i<m;i++)
      {for(j=0;j<q;j++)
      {c[i][j]=0;
      for(k=0;k<n;k++)
      c[i][j]=c[i][j] + a[i][k]*b[k][j];
      }
      }
      for(i=0;i<m;i++)
      {
      for(j=0;j<q;j++)
      cout<<"\t"<<c[i][j];/*outputting product*/
      cout<<"\n";
      }
      getch();
      }
