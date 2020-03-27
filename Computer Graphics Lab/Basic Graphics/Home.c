#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
rectangle(1,1,639,479);
rectangle(150,150,350,300);
rectangle(230,225,270,300);
rectangle(300,170,320,200);
rectangle(180,170,200,200);
line(310,170,310,200);
line(190,170,190,200);
line(100,150,400,150);
line(100,150,150,100);
line(350,100,400,150);
line(350,100,150,100);
getch();
closegraph();
}