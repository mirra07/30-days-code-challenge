#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
int n,a[20],flag;
cout<<"\n size:";
cin>>n;
cout<<"\n values:\n";
for(int i=0;i<n;i++)
cin>>a[i];
int search;
cout<<"\n search element";
cin>>search;
for(i=0;i<n;i++)
{ if(search==a[i])
 { cout<<"\n found at"<<i+1;
   flag=1;
 }
}
if(flag!=1)
cout<<"\n not found";
getch();
}