#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
rectangle(1,1,639,479);
setcolor(10);

circle(150,150,100);

circle(100,110,10);
circle(200,110,10);
line(150,130,150,170);
ellipse(150,200,0,360,30,20);
fillellipse(150,200,30,20);
line(150,20,150,50);
line(130,20,150,50);
line(170,20,150,50);
arc(50,150,90,270,10);
arc(250,150,270,90,10);
getch();
closegraph();
}

