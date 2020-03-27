#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
  void rotate()
  {
    int x,y;
    int x1=300,y1=200,x2=300,y2=150;
    double th;
    int t;
    struct time tm;
    setcolor(GREEN);
    line(x1,y1,x2,y2);
    while(!kbhit())
   {
    outtextxy(295,135,"12");
    outtextxy(298,255,"6");
    outtextxy(235,200,"9");
    outtextxy(355,200,"3");
    gettime(&tm);
    t=tm.ti_sec*6;
    th=t*3.142857/180.0;
    x=x1+(x2-x1)*cos(th)-(y2-y1)*sin(th);
    y=y1+(x2-x1)*sin(th)+(y2-y1)*cos(th);
    setcolor(BLUE);
    line(x1,y1,x,y);
    circle(300,200,70);
    delay(100);
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