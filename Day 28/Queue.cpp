#include<iostream.h>
#include<conio.h>
int f=-1,r=-1,n,ar[20];
void enQ()
{ cout<<"\n enter element to be inserted";
  cin>>ar[r];
  r++;
}
void dQ()
{ ar[f]=NULL;
  f++;
cout<<"\n deleted";
}
void disp()
{ for(int i=f;i<r;i++)
  cout<<"\n"<<ar[i];
}
void main()
{
clrscr();
int ch;
char f;
cout<<"\n enter the size of queue:";
cin>>n;
do
{
cout<<"\n enter your choice of operation \n1.enqueue \n2.dequeue\n";
cin>>ch;
switch (ch)
{
case 1:
 if(r==n||r>n)
  cout<<"\n overflow";
 else
 { enQ();
   disp();
 }
break;
case 2:
if(f==-1)
cout<<"\n underflow";
else
 {
 dQ();
 disp();
 }
break;
}
cout<<"\n do yo want to continue(y/n)";
cin>>f;
}while(f=='y'||f=='Y');
getch();
}