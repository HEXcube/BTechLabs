#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void bounce()
{
 int y,l=0;
 circle(100,335,15);
 while(!kbhit())
 {
  if(y>=100)
  {
   y=335-l;
   rectangle(1,1,639,479);
   rectangle(5,5,634,474);
   line(5,350,634,350);
   circle(100,y,15);
   delay(500);
   setviewport(0,0,639,479,0);
   clearviewport();
   l=l+5;
  }
  y=100;
  if(y<=335)
  {
   y=100+l;
   rectangle(1,1,639,479);
   rectangle(5,5,634,474);
   line(5,350,634,350);
   circle(100,y,15);
   delay(500);
   setviewport(0,0,639,479,0);
   clearviewport();
   l=l+5;
  }

 }
}
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 bounce();
 getch();
 closegraph();
}