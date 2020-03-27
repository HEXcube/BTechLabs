#include<graphics.h>
#include<conio.h>
int main()
{
 int gd=DETECT,gm;
 int x=320,y=240,radius;
 initgraph(&gd,&gm,"c:\\TC\\BGI");
 for(radius=25;radius<=125;radius=radius+20)
  circle(x,y,radius);
  getch();
  closegraph();
 return 0;
}
