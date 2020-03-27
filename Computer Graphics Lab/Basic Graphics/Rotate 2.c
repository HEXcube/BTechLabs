#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
  void rotate()
  {
    int x,y;
    int x1=200,y1=200,x2=300,y2=150;
    double th;
    int t;
    setcolor(GREEN);
    line(x1,y1,x2,y2);
    for(t=0;t<360;t+=5)
   {
    th=t*3.142857/180.0;
    x=x1+(x2-x1)*cos(th)-(y2-y1)*sin(th);
    y=y1+(x2-x1)*sin(th)+(y2-y1)*cos(th);
    setcolor(BLUE);
    line(x1,y1,x,y);
    delay(500);
    cleardevice();
   }
  }
 void main()
 {
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\tc\\bgi");
   rectangle(1,1,639,479);
   rectangle(5,5,634,475);
   rotate();
  getch();
  closegraph();
  }