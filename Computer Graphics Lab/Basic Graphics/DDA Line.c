#include<stdio.h>
#include<conio.h>
#include <GL/glut.h>

void ddaline(int p,int q,int r,int s)
{
    int gd,gm;
    int dx=r-p;
    int dy=s-q;
    gd=DETECT;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    float xincr,yincr,step,x,y;
    int i;
    if(abs(dx)>abs(dy))
    step=abs(dx);
    else
    step=abs(dy);
    x=p;
    y=q;
    xincr=dx/step;
    yincr=dy/step;
    for(i=1;i<=step;i++)
    {
        putpixel(x,y,2);
        x=x+xincr;
        y=y+yincr;
    }
}

void main()
{
    int gd,gm;
    gd=DETECT;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    ddaline(100,200,300,400);
    closegraph();
    getch();
}
