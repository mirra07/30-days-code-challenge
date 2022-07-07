#include<iostream.h>
#include<conio.h>
int ch,n,temp,a[20];
void sort()
{ for(int i=0;i<n;i++)
     { temp=a[i];
       int j =i-1;
       while(j>=0 && temp<=a[j])
     { a[j+1]=a[j];
       j=j-1;
     }
     a[j+1]=temp;
    }
}
void main()
{
clrscr();
 int s,m,b[20],c[40],k=0;
cout<<"\n enter the no. of elements:";
cin>>n;
cout<<"\n enter the elements:";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"\n enter your choice of sorting to be performed:\n1.insertion sort\n2.selection sort\n3.merge sort\n";
cin>>ch;
 switch(ch)
 {
   case 1:
   sort();
    cout<<"\nsorted array\n:";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
   break;

   case 2:
     for(i=0;i<n-1;i++)
     { s=i;
     for(int j=i+1;j<n;j++)
     if(a[j]<a[s])
     s=j;

     temp=a[s];
     a[s]=a[i];
     a[i]=temp;

    }
    cout<<"\nsorted array\n:";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";

   break;

   case 3:
     sort();
   /*cout<<"\n enter elements for 1st rray:";
   for(i=0;i<n;i++)
   cin>>a[i]; */
   cout<<"\n enter size of 2nd array";
   cin>>m;
   cout<<"\n enter elements for 2nd array";
   for(i=0;i<m;i++)
   cin>>b[i];
    for(i=0;i<n;i++)
    { for(int j=0;j<m;j++)
     {if(a[i]<b[j])
      {c[k]=a[i];
      i++;
      }
      else
      {c[k]=b[j];
      j++;
      }
    /* if(i==n)
     c[k]=b[j++];
     else if(j==n)
     c[k]=a[i++];*/
    }
   }
    cout<<"\nsorted array\n:";
    for(i=0;i<n+m;i++)
    cout<<c[i]<<" ";

   break;

   default:
   cout<<"\n invalid choise";
   break;
 }
getch();
}