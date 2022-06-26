#include<graphics.h>
int main()
{
    int a=DETECT,b;
    initgraph(&a,&b,"");

    circle(300,200,60);
    closegraph();
    return 0;
}