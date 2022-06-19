#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char msg[100];
 int l,i=0;
 cout<<"\n enter msg \n";
 cin.getline(msg,100);
 l=strlen(msg);
 cout<<"\n encryoted\n";
 while(i<l)
 { if(i%2==0)
   cout<<msg[i];
   i++;
 }
 i=0;
 while(i<l)
 { if(i%2!=0)
   cout<<msg[i];
   i++;
 }
 getch();
}
