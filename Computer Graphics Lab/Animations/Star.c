#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void drawings()
{
line(300,50,200,400);
moveto(200,400);
lineto(400,400);
lineto(300,50);
line(200,100,300,450);
moveto(300,450);
lineto(400,100);
lineto(200,100);
 rectangle(1,1,639,479);
 rectangle(5,5,634,474);
}
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 drawings();
 getch();
 closegraph();
 }
