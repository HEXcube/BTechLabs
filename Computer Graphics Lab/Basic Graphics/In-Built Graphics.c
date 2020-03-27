#include<graphics.h>
#include<stdio.h>
void main()
{
	int points[]={320,150,420,300,250,300,320,150};
	int gd,gm,p,q,x,y,a,m,b,c,d,e,f,g,h,i,j,k,l,a1,a2,a3,a4,a5,a6,a7,a8,a9,b1,b2,b3,b4,b5,b6,b7,b8,b9,d1,d2,d3,d4,d5,d6,d7,d8,d9,c9,f3,font,X,Y;
	gd=DETECT;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
do
{
printf("enter the choice:\n1.line \t2.rectangle \t3.sector \t4.fillpoly \t5.floodfill \t6.arc \n7.bar \t8.bar 3d \t9.circle \t10.drawpoly \t11.ellipse \t12.fillellipse \n13.setbkcolor \t14.setcolor \t15.outtext \t16.outtextxy \t17.setfillstyle \t18.settextstyle");
scanf("%d",&a);
switch(a)
{
case 1:
	printf("enter the coorditates");
	scanf("%d%d%d%d",&x,&y,&p,&q);
	line(x,y,p,q);
	break;
case 2:
	printf("enter the coordinates");
	scanf("%d%d%d%d",&b,&c,&d,&e);
	rectangle(b,c,d,e);
	break;
case 3:
	printf("enter the values");
	scanf("%d%d%d%d%d%d",&f,&g,&h,&i,&j,&f3);
	sector(f,g,h,i,j,f3);
	break;
case 4:
	fillpoly(4,points);
	break;
case 5:
	setcolor(RED);
	circle(100,100,50);
	floodfill(100,100,RED);
	break;
case 6:
	printf("enter the values");
	scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
	arc(a1,a2,a3,a4,a5);
	break;

case 7:
	printf("enter the values");
	scanf("%d%d%d%d",&a6,&a7,&a8,&a9);
	bar(a6,a7,a8,a9);
	break;
case 8:
	printf("enter the values");
	scanf("%d%d%d%d%d%d",&b1,&b2,&b3,&b4,&b5,&b6);
	bar3d(b1,b2,b3,b4,b5,b6);
	break;
case 9:
	printf("enter the values");
	scanf("%d%d%d",&b7,&b8,&b9);
	circle(b7,b8,b9);
	break;
case 10:
	drawpoly(4,points);
	break;
case 11:
	printf("enter the values");
	scanf("%d%d%d%d%d%d",&d1,&d2,&d3,&d4,&d5,&d6);
	ellipse(d1,d2,d3,d4,d5,d6);
	break;

case 12:
	printf("enter the values");
	scanf("%d%d%d%d",&d7,&d8,&d9,&c9);
	fillellipse(d7,d8,d9,c9);
	break;
case 13:
	outtext("press any key to change the background color to green");
	setcolor(GREEN);
	break;
case 14:
	circle(100,100,50);
	setcolor(RED);
	circle(200,200,50);
	break;
case 15:
	outtext("silnakrishna");
	break;
case 16:
	outtextxy(100,100,"nest");
	break;
case 17:
	setfillstyle(8,RED);
	circle(100,100,50);
	floodfill(100,100,WHITE);
	break;
case 18:
	for(font=0;font<=10;font++);
	{
		settextstyle(font,HORIZ_DIR,1);
		outtextxy(X,Y,"SILNA");
		Y=Y+20;
	}
	break;
}
printf("press 1 to continue.....");
scanf("%d",&m);
cleardevice();
}
while(m==1);
closegraph();
getch();
}




