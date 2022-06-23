#include<iostream.h>
#include<conio.h>
#include<math.h>
long long int power(long long int a,long long int b,long long int p)
{ if(b==1)
  return a;
  else
  return(((long long int)pow(a,b))%p);
}
void main()
{ clrscr();
long long int p,g,x,y,a,b,kA,kB;
p=23;
g=9;
cout<<"\n public key values  p:"<<p<<" g:"<<g;
a=4;
b=3;
cout<<"\n private key of A "<<a;
x=power(g,a,p);
cout<<"\n private key of B "<<b;
y=power(g,b,p);
kA=power(y,a,p);
kB=power(x,b,p);
cout<<"\n A secret key "<<kA<<"\n B secret key "<<kB;
getch();
}