#include <stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void bounce()
{       //th-phase angle,w-angular freq,A-initial amplitude
 double th;

 y=A*abs(sin(wx+th)*pow(e,(-k*x))
}
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 bounce();
 getch();
 closegraph();
}