#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
  void rotate()
  {
    int x,y,p,q;
    int x1=200,y1=200,x2=300,y2=100,x3=400,y3=200;
    double th=-30*3.142857/180.0;
    setcolor(GREEN);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    x=x1+(x2-x1)*cos(th)-(y2-y1)*sin(th);
    y=y1+(x2-x1)*sin(th)+(y2-y1)*cos(th);
    p=x1+(x3-x1)*cos(th)-(y3-y1)*sin(th);
    q=y1+(x3-x1)*sin(th)+(y3-y1)*cos(th);
    setcolor(BLUE);
    line(x1,y1,x,y);
    line(x1,y1,p,q);
    line(x,y,p,q);
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