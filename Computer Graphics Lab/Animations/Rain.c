#include <stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void man()
{
 int l=0;
 int x1=100,y1=330,x2=90,y2=350;
 int x,y,t=0;
 double th;
 while(!kbhit())
 {
  for(t=0;t<20;t+=3)
  {
   rectangle(1,1,639,479);
   rectangle(5,5,634,474);
   line(5,350,634,350);
   line(90+l,350,100+l,330);
   line(110+l,350,100+l,330);
   line(100+l,330,100+l,270);
   line(100+l,290,90+l,310);
   line(100+l,290,115+l,280);
   line( 115+l,280,115+l,247);
   line(85+l,247,145+l,247);
   circle(100+l,260,10);
   ellipse(115+l,247,0,180,30,20);
   delay(300);
   setviewport(0,0,639,479,0);
   clearviewport();
   l=(l+10)%640;
   th=t*3.142857/180.0;
   x=x1+(x2-x1)*cos(th)-(y2-y1)*sin(th);
   y=y1+(x2-x1)*sin(th)+(y2-y1)*cos(th);
   line(x1,y1,x,y);
   delay(300);
   cleardevice();
  }
  x2=x;
  y2=y;
  for(t=0;t<20;t+=3)
  {
   rectangle(1,1,639,479);
   rectangle(5,5,634,474);
   line(5,350,634,350);
   line(90+l,350,100+l,330);
   line(110+l,350,100+l,330);
   line(100+l,330,100+l,270);
   line(100+l,290,90+l,310);
   line(100+l,290,115+l,280);
   line( 115+l,280,115+l,247);
   line(85+l,247,145+l,247);
   circle(100+l,260,10);
   ellipse(115+l,247,0,180,30,20);
   delay(300);
   setviewport(0,0,639,479,0);
   clearviewport();
   l=(l+10)%640;
   th=-t*3.142857/180.0;
   x=x1+(x2-x1)*cos(th)-(y2-y1)*sin(th);
   y=y1+(x2-x1)*sin(th)+(y2-y1)*cos(th);
   line(x1,y1,x,y);
   delay(300);
   cleardevice();
  }
  x2=x;
  y2=y;
  for(t=0;t<20;t+=3)
  {
   rectangle(1,1,639,479);
   rectangle(5,5,634,474);
   line(5,350,634,350);
   line(90+l,350,100+l,330);
   line(110+l,350,100+l,330);
   line(100+l,330,100+l,270);
   line(100+l,290,90+l,310);
   line(100+l,290,115+l,280);
   line( 115+l,280,115+l,247);
   line(85+l,247,145+l,247);
   circle(100+l,260,10);
   ellipse(115+l,247,0,180,30,20);
   delay(300);
   setviewport(0,0,639,479,0);
   clearviewport();
   l=(l+10)%640;
   th=-t*3.142857/180.0;
   x=x1+(x2-x1)*cos(th)-(y2-y1)*sin(th);
   y=y1+(x2-x1)*sin(th)+(y2-y1)*cos(th);
   line(x1,y1,x,y);
   delay(300);
   cleardevice();
  }
  x2=x;
  y2=y;
  for(t=0;t<20;t+=3)
  {
   rectangle(1,1,639,479);
   rectangle(5,5,634,474);
   line(5,350,634,350);
   line(90+l,350,100+l,330);
   line(110+l,350,100+l,330);
   line(100+l,330,100+l,270);
   line(100+l,290,90+l,310);
   line(100+l,290,115+l,280);
   line( 115+l,280,115+l,247);
   line(85+l,247,145+l,247);
   circle(100+l,260,10);
   ellipse(115+l,247,0,180,30,20);
   delay(300);
   setviewport(0,0,639,479,0);
   clearviewport();
   l=(l+10)%640;
   th=t*3.142857/180.0;
   x=x1+(x2-x1)*cos(th)-(y2-y1)*sin(th);
   y=y1+(x2-x1)*sin(th)+(y2-y1)*cos(th);
   line(x1,y1,x,y);
   delay(300);
   cleardevice();
  }
  x2=x;
  y2=y;
 }
}
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 man();
 getch();
 closegraph();
}