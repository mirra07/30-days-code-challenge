#include <iostream.h>
#include <stdlib.h>
#include<conio.h>

void main(int argc, char **argv)
{   clrscr();
    cout << "Enter the number of dice: ";
    int n;
    cin >> n;
    cout << "The values on dice are: ( ";
    for (int i = 0; i < n; i++)
	cout << (rand() % 6) + 1<<" ";
    cout<<")";
    getch();
}