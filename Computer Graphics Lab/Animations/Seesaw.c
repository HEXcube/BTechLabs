#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void saw()
  {
   int x1=200,y1=200,x2=300,y2=100,xm=250,ym=150;
   int x,y,t,p,q;
   double th;
   while(!kbhit())
   {
   for(t=0;t<75;t+=3)
    {
    line(xm,ym,270,200);
    line(xm,ym,230,200);
    line(230,200,270,200);
    th=t*3.142857/180.0;
    x=xm+(x1-xm)*cos(th)-(y1-ym)*sin(th);
    y=ym+(x1-xm)*sin(th)+(y1-ym)*cos(th);
    p=xm+(x2-xm)*cos(th)-(y2-ym)*sin(th);
    q=ym+(x2-xm)*sin(th)+(y2-ym)*cos(th);
    setcolor(BLUE);
    line(x,y,p,q);
    delay(200);
    cleardevice();
   }
   x1=x;
   y1=y;
   x2=p;
   y2=q;
   for(t=0;t<75;t+=3)
    {
    line(xm,ym,270,200);
    line(xm,ym,230,200);
    line(230,200,270,200);
    th=-t*3.142857/180.0;
    x=xm+(x1-xm)*cos(th)-(y1-ym)*sin(th);
    y=ym+(x1-xm)*sin(th)+(y1-ym)*cos(th);
    p=xm+(x2-xm)*cos(th)-(y2-ym)*sin(th);
    q=ym+(x2-xm)*sin(th)+(y2-ym)*cos(th);
    setcolor(BLUE);
    line(x,y,p,q);
    delay(200);
    cleardevice();
   }
   x1=x;
   y1=y;
   x2=p;
   y2=q;
   }
  }
void main()




 {
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\tc\\bgi");
   rectangle(1,1,639,479);
   rectangle(5,5,634,475);
   saw();
  getch();
  closegraph();
  }