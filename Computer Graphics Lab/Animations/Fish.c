#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void mov(int x)
{
 setcolor(10);
 line(100+x,200,200+x,270);
 line(100+x,240,200+x,180);
 line(100+x,200,100+x,240);
 line(200+x,180,200+x,270);
 line(200+x,180,250+x,225);
 line(200+x,270,250+x,225);
 circle(220+x,225+x,5);
 circle(356+x,435-x,15);
 circle(290+x,400,12);
 circle(190,380+x,19);
}
void main()
{
 int gd,gm,n,i,x,p[10],y,m;
 gd=DETECT;
 initgraph(&gd,&gm,"C:\\PROGRA~1\\TC\\BGI");
 clrscr();
 for(i=0;i<500;i++)
 {
  mov(i);
  delay(50);
  cleardevice();
 }
 getch();
 closegraph();
}
