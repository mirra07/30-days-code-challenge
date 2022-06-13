#include<iostream.h>
#include<conio.h>
#include<process.h>

char a[20],top=-1;
void push(char val,int n)
{ if(top==n)
  { cout<<"\n overflow";
    getch();
  }
  else
{ top++;
  a[top]=val;
}
}
 void pop()
{ if(top==-1)
 { cout<<"\n underflow";
   getch();
   exit(0);
 }
 else
 top--;
}
void dip(int n)
{ if(top==-1)
 { cout<<"\n empty stack";
   exit(0);
 }
 else
 {cout<<"\n stack contains";
  for(int i=0;i<n;i++)
  cout<<a[i]<<"\n";
  }
 }
 void main()
 { clrscr();
   int ch,n;
   char z,f;

    cout<<"\n enter size";
     cin>>n;
    do
    {
     cout<<"\nenter your choice \n 1.push\n 2.pop \n 3.display";
     cin>>ch;
     switch(ch)
     { case 1:
      cout<<"\n enter element for insertion:\n";
      cin>>z;
      push(z,n);
      break;
      case 2:
      pop();
      cout<<"\n deletedd";
      break;
      case 3:
      dip(n);
      break;
      default: cout<<"\n invalid choice";
      break;
   }
 cout<<"\n do you wanna continue (y/n):";
 cin>>f;
 }while(f=='y'||f=='Y');
 getch();
 }