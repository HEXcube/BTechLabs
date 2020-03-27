#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void drawings()
{
 rectangle(1,1,639,479);
 rectangle(5,5,634,474);
 line(70,150,70,400);
 line(70,400,300,400);
 settextstyle(2,0,4);
 outtextxy(300,420,"Year");
 settextstyle(2,1,4);
 outtextxy(40,200,"Pass Percentage");
 settextstyle(2,0,4);
 outtextxy(100,420,"2004    2005    2006    2007");
}
void main()
{
 int gd=DETECT,gm;
 int n,p,perc,y,i;
 int x=50;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 drawings();
 settextstyle(2,0,4);
 for(i=0;i<4;i++)
 {
  printf("Enter the total no. of students:");
  scanf("%d",&n);
  printf("Enter the no. of students passed:");
  scanf("%d",&p);
  perc=(p*100)/n;
  y=400-(perc*2);
  x=x+50;
  bar3d(x,y,x+10,400,5,1);
 }
  getch();
  closegraph();
}
