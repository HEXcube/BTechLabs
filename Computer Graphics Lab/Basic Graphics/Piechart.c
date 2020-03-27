#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void drawings()
{
 rectangle(1,1,639,479);
 rectangle(5,5,634,474);
}
void main()
{
 int i,n,p[20],y=270;
 float t,a[20],st=0,s=0;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 drawings();
 printf("Enter the total no. of students:");
 scanf("%d",&n);
 for(i=1;i<=4;i++)
 {
  printf("Enter the no. of students passed in 200%d:",i);
  scanf("%d",&p[i]);
  s+=p[i];
 }
 t=360/s;
 setcolor(RED);
 for(i=1;i<=4;i++)
 {
  a[i]=p[i]*t;
  setfillstyle(i,GREEN);
  pieslice(300,200,st,st+a[i],50);
  st=st+a[i];
 }
 rectangle(470,250,560,430);
 for(i=1;i<=4;i++)
 {
  rectangle(480,y,500,y+20);
  setfillstyle(i,GREEN);
  bar(480,y,500,y+20);
  if(i==1)
  outtextxy(510,275,"2001");
  if(i==2)
  outtextxy(510,315,"2002");
  if(i==3)
  outtextxy(510,355,"2003");
  if(i==4)
  outtextxy(510,395,"2004");
  y+=40;
 }
 getch();
 closegraph();
 }
