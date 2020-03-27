#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
  {
	int gm,gd,k=0;
	int p[]={310,260,320,200,300,200,310,260};
	int q[]={310,260,370,250,370,270,310,260};
	int r[]={310,260,250,270,250,250,310,260};
	int s[]={310,260,320,320,300,320,310,260};
	int a[]={310,260,350,210,350,230,310,260};
	int b[]={310,260,350,290,330,310,310,260};
	int c[]={310,260,270,290,290,310,310,260};
	int d[]={310,260,290,210,290,230,310,260};
	gd=DETECT;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	setcolor(RED);
	while(k<5000)
	  {
		line(310,50,310,260);
		if(k%20!=0);
		  {
			drawpoly(4,p);
			drawpoly(4,q);
			drawpoly(4,r);
			drawpoly(4,s);
		  }
		  else
		  {
			drawpoly(4,a);
			drawpoly(4,b);
			drawpoly(4,c);
			drawpoly(4,d);
		  }
			k=k+10;
			delay(70);
			cleardevice();
 	  }

          getch();
	  closegraph();
}


