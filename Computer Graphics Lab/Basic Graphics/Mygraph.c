#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

//for drawing border
void drawings()
{
 rectangle(1,1,639,479);
 rectangle(5,5,634,474);
}

//for drawing an arc
void arct(int xc,int yc,int r,int st,int en)
{
 double th,thr;
 int x,y;
 cleardevice();
 for(th=st;th<=en;th+=0.1)
 {
  thr=(th*3.1415)/180;
  x=r*cos(thr);
  y=r*sin(thr);
  putpixel(xc+x,yc+y,RED);
 }
 getch();
}

//for drawing circle
void circlet(int xc,int yc,int r)
{
 double th,thr;
 int x,y;
 cleardevice();
 for(th=0;th<=360;th+=0.1)
 {
  thr=(th*3.1415)/180;
  x=r*cos(thr);
  y=r*sin(thr);
  putpixel(xc+x,yc+y,RED);
 }
 getch();
}

//for plotting points
void plotpoints(int x,int y,int xc,int yc)
{
 putpixel(xc+x,yc+y,YELLOW);
 putpixel(xc-x,yc+y,YELLOW);
 putpixel(xc+x,yc-y,YELLOW);
 putpixel(xc-x,yc-y,YELLOW);
 putpixel(xc+y,yc+x,YELLOW);
 putpixel(xc+y,yc-x,YELLOW);
 putpixel(xc-y,yc+x,YELLOW);
 putpixel(xc-y,yc-x,YELLOW);
}

//for drawing circle
void circlet1(int xc,int yc,int r)
{
 double th,thr;
 int x,y;
 cleardevice();
 for(th=0;th<=45;th+=0.1)
 {
  thr=(th*3.1415)/180;
  x=r*cos(thr);
  y=r*sin(thr);
  plotpoints(x,y,xc,yc);
 }
 getch();
}


void plotpoints1(int x,int y,int xc,int yc)
{
 putpixel(xc+x,yc+y,YELLOW);
 putpixel(xc-x,yc+y,YELLOW);
 putpixel(xc+x,yc-y,YELLOW);
 putpixel(xc-x,yc-y,YELLOW);
}


void ellipset(int xc,int yc,int rx,int ry)
{
 double th,thr;
 int x,y;
 cleardevice();
 for(th=0;th<=90;th+=0.1)
 {
  thr=(th*3.1415)/180;
  x=rx*cos(thr);
  y=ry*sin(thr);
  plotpoints1(x,y,xc,yc);
 }
 getch();
}


void cardioidt(int xc,int yc,int a)
{
 double th,thr,r;
 int x,y;
 cleardevice();
 for(th=0;th<=360;th+=0.1)
 {
  thr=(th*3.1415)/180;
  r=a*(1+cos(thr));
  x=r*cos(thr);
  y=r*sin(thr);
  putpixel(xc+x,yc+y,GREEN);
 }
 getch();
}


void leaf(int xc,int yc,int a, int n)
{
 double th,thr,r;
 int x,y;
 cleardevice();
 for(th=0;th<=360;th+=0.1)
 {
  thr=(th*3.1415)/180;
  r=a*cos(n*thr);
  x=r*cos(thr);
  y=r*sin(thr);
  putpixel(xc+x,yc+y,GREEN);
 }
 getch();
}


void doubleleaf(int xc,int yc,int a, int n)
{
 double th,thr,r;
 int x,y;
 cleardevice();
 for(th=0;th<=360;th+=0.1)
 {
  thr=(th*3.1415)/180;
  r=a*cos(n*thr);
  x=r*cos(thr);
  y=r*sin(thr);
  putpixel(xc+x,yc+y,GREEN);
 }
 getch();
}


void spiralt(int xc,int yc,int a)
{
 double th,thr,r;
 int x,y;
 cleardevice();
 for(th=0;th<=360;th+=0.1)
 {
  thr=(th*3.1415)/180;
  r=a*thr;
  x=r*cos(thr);
  y=r*sin(thr);
  putpixel(xc+x,yc+y,GREEN);
 }
 getch();
}


void limacont(int xc,int yc,int a,int b)
{
 double th,thr,r;
 int x,y;
 cleardevice();
 for(th=0;th<=360;th+=0.1)
 {
  thr=(th*3.1415)/180;
  r=a+b*cos(thr);
  x=r*cos(thr);
  y=r*sin(thr);
  putpixel(xc+x,yc+y,GREEN);
 }
 getch();
}


void circleg(int xc,int yc,int r)
{
 double x,y;
 cleardevice();
 for(x=0;x<=y;x+=0.1)
 {
  y=sqrt((r*r)-(x*x));
  plotpoints(x,y,xc,yc);
 }
 getch();
}


void circlemid(int xc,int yc,int r)
{
 int x=0,y=r;
 int p=1-r;
 cleardevice();
 while(x<=y)
 {
  plotpoints(x,y,xc,yc);
  x++;
  if(p<0)
   p=p+2*x+1;
  else
  {
   y--;
   p=p+2*(x-y)+1;
  }
 }
 getch();
}
 //drawing circle using bresenhams

void circlebres(int xc,int yc,int r)
{
 int x=0,y=r;
 int p=3-2*r;
 cleardevice();
 while(x<=y)
 {
  plotpoints(x,y,xc,yc);
  if(p<0)
   p=p+4*x+6;
  else
  {
   y--;
   p=p+4*(x-y)+10;
  }
  x++;
 }
 getch();
}

void circledot(int xc,int yc,int r)
{
 double th,thr;
 int x,y;
 cleardevice();
 for(th=0;th<=360;th+=10)
 {
  thr=(th*3.1415)/180;
  x=r*cos(thr);
  y=r*sin(thr);
  putpixel(xc+x,yc+y,RED);
 }
 getch();
}
    //drawing line  using general equation
/* void genline(int xa,int ya,int xb,int yb)
 {
    int dx,dy,x,y;
    float m;
    m=((yb-ya)/(xb-xa));
   // b=ya-(m*xa);
    dx=xb-xa;
    dy=yb-ya;
    if(abs(m)<1)
     {

      x=xa;
      y=ya;
     putpixel(x,y,RED);
      dy=m*dx;




   else
   if(abs(m)>1)
    dx=dy/m;
    else
    dx=dy;



 } */


void linedda(int xa,int ya,int xb,int yb)
{
 int s,k,dx,dy;
 float xin,yin,x,y;
 dx=xb-xa;
 dy=yb-ya;
 x=xa;
 y=ya;
 if(abs(dx)>abs(dy))
  s=abs(dx);
 else
  s=abs(dy);
 xin=dx/(float)s;
 yin=dy/(float)s;
 putpixel(x,y,RED);
 for(k=0;k<s;k++)
 {
  x+=xin;
  y+=yin;
  putpixel(x,y,RED);
 }
 getch();
}


/*void linebres(int xa,int ya,int xb,int yb)
{
 int p,dx,dy;
 float x,y;
 cleardevice();
 x=xa;
 y=ya;
 putpixel(x,y,RED);
 dx=xb-xa;
 dy=yb-ya;
 p=(2*dy)-dx;
 while(x<=xb&&y<=yb)
 {
  if(p<0)
   p=p+2*dy;
  else
   p=p+((2*dy)-(2*dx));
  putpixel(x,y,GREEN);
  x++;y++;
 }
 getch();
}


void circledash(int xc,int yc,int r)
{
 double th,thr;
 int x,y;
 for(th=0;th<=360;th+=1)
 {
  thr=th*3.1415/180.0;
  x=r*cos(thr);
  y=r*sin(thr);
  if((int)th%8==0)
   putpixel(xc+x,yc+y,BLACK);
  else
   putpixel(xc+x,yc+y,MAGENTA);
  }
  getch();
} */


void pieslicet(int xc,int yc,int st,int en,int r)
{
 double th,thr;
 int x,y;
 for(th=st;th<=en;th+=1)
 {
  thr=(th*3.1415)/180.0;
  x=r*cos(thr);
  y=r*sin(thr);
  putpixel(xc+x,yc+y,RED);
  linedda(xc,yc,xc+x,yc+y);
 }

}
void tri(int x1,int y1,int x2,int y2,int x3,int y3)
{
 linedda(x1,y1,x2,y2);
 linedda(x2,y2,x3,y3);
 linedda(x3,y3,x1,y1);
}

void sectort(int xc,int yc,int st,int en,int rx,int ry)
{
 double th,thr;
 int x,y;
 for(th=st;th<=en;th+=1)
 {
  thr=(th*3.1415)/180.0;
  x=rx*cos(thr);
  y=ry*sin(thr);
  putpixel(xc+x,yc+y,RED);
  linedda(xc,yc,xc+x,yc+y);
 }
}
void bart(int x1,int y1,int x2,int y2)
{
  int x;
  linedda(x1,y1,x1,y2);
  linedda(x1,y2,x2,y2);
  linedda(x2,y2,x2,y1);
  linedda(x2,y1,x1,y1);
  for(x=x1;x<=x2;x++)
  {
   linedda(x,y1,x,y2);
  }
}

void bar3dt(int x1,int y1,int x2,int y2,int d,int t)
{
  int x;
  linedda(x1,y1,x1,y2);
  linedda(x1,y2,x2,y2);
  linedda(x2,y2,x2,y1);
  linedda(x2,y1,x1,y1);
  linedda(x2,y1,x2+t,y1-t);
  linedda(x1,y1,x1+t,y1-t);
  linedda(x2+d,y1-d,x1+d,y1-d);
  linedda(x2+d,y2-d,x2+d,y1-d);
  linedda(x2,y2,x2+d,y2-d);
  for(x=x1;x<=x2;x++)
  {
   linedda(x,y1,x,y2);
  }
}
/*void ffill(int x,int y,int fc,int oc)
{
   if(getpixel(x,y)==oc)
      {
	setcolor(fc);
	setpixel(x,y);
	ffill(x+1,y,fc,oc);
	ffill(x,y+1,fc,oc);
	ffill(x-1,fc,oc);
	ffill(x,y-1,fc,oc);
      }
}
*/
void main()
{
 int gd=DETECT,gm;
 clrscr();
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 drawings();
/* arct(200,200,50,45,270);
 circlet(200,200,50);
 circlet1(200,200,50);
 ellipset(200,200,150,50);
 cardioidt(200,200,50);
 leaf(200,200,50,5);
 doubleleaf(200,200,50,4);
 spiralt(200,200,10);
 limacont(200,200,30,50);
 circleg(200,200,50);
 circlemid(200,200,50);
 circlebres(200,200,50);
 circledot(200,200,50);
 linedda(200,200,300,300);
 //linebres(0,0,400,600);
 //genline(0,0,400,600);
 pieslicet(100,100,0,240,50);
 sectort(200,200,0,240,150,50);
 tri(100,100,50,150,150,150); */
// circledash(100,100,50);
 bart(300,300,330,450);
 bar3dt(100,100,130,250,5,5);

 getch();
 closegraph();
}