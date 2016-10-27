#include<iostream.h>
#include<stdio.h>
#include<conio.h>

main()
{
int A=10,i,j,jum;

for(i=2;i<=A;i+=2)
{
    jum=0;
   for(j=2;j<=i;j+=2)
       {
          if(j!=2)
         cout<<"+";
         cout<<j;
         jum+=j;
      }
   cout<<"="<<jum<<endl;
}
cout<<endl;
getch();
}