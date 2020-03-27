#include<graphics.h>
#include<stdio.h>
#include<math.h>
#define ROUND(a) ((int)(a+.5))
void ellipsemidpoint(int xc,int yc,int rx,int ry)
{
int rx2 = rx*rx;
int ry2 = ry*ry;
int tworx2= 2* rx2;
int twory2= 2* ry2;
int p;
int x=0;
int y=ry;
int px=0;
int py=tworx2*y;
void ellipseplotpoints(int,int,int,int);
ellipseplotpoints(xc,yc,x,y);
p=ROUND(ry2-(rx*2*ry)+(.25+rx*2));
while(px<py)
 {
  x++;
px=px+twory2;
if(p<0)
 p=p+ry2+px;
else
 {
  y--;
  py=py-tworx2;
  p=p+ry2+px-py;
 }
ellipseplotpoints(xc,yc,x,y);
}
p=ROUND(ry2*(x+0.5)*(x+0.5)+rx2*(y-1)*(y-1)-rx2*ry2);
while(y>0)
  {
y--;
py=py-tworx2;
if(p>0)
 p=p+rx2-py;
else
 {
  x++;
px=px+twory2;
p=p+rx2-py+px;
  }
ellipseplotpoints(xc,yc,x,y);
 }
}
void ellipseplotpoints(int xc,int yc,int x,int y)
 {
  putpixel(xc+x,yc+y,3);
  putpixel(xc-x,yc+y,3);
  putpixel(xc+x,yc-y,3);
  putpixel(xc-x,yc-y,3);
  }
void main()
 {
  int gd=DETECT;
  int gm;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
 ellipsemidpoint(320,240,30,30);
 getch();
 closegraph();
  }


