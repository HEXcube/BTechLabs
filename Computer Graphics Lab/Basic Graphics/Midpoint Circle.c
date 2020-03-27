#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void circlemidpoint(int xcenter,int ycenter,int radius)
{
 int x=0;
 int y=radius;
 int p=1-radius;
 void circleplotpoints(int,int,int,int);
 circleplotpoints(xcenter,ycenter,x,y);
 while(x<y)
 {
  x++;
  if(p<0)
  p+=2*x+1;
  else
  {
  y--;
  p+=2*(x-y)+1;
  }
  circleplotpoints(xcenter,ycenter,x,y);
  }
  }
  void circleplotpoints(int xcenter,int ycenter,int x,int y)
  {
  putpixel(xcenter +x,ycenter +y,1);
  putpixel(xcenter -x,ycenter +y,2);
  putpixel(xcenter +x,ycenter -y,3);
  putpixel(xcenter -x,ycenter -y,4);
  putpixel(xcenter +y,ycenter +x,5);
  putpixel(xcenter -y,ycenter +x,6);
  putpixel(xcenter +y,ycenter -x,7);
  putpixel(xcenter -y,ycenter -x,8);
  }

  void main()
  {
  int gd,gm,a,b,x,y,radius;
  gd=DETECT;
  initgraph(&gd,&gm,"c:\\tc\\BGI");
  printf("Enter center & radius:");
  scanf("%d%d%d",&a,&b,&radius);
  circlemidpoint(a,b,radius);
  circleplotpoints(a,b,x,y);
  getch();
  closegraph();
  }
