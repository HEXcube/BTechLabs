/*
Animation of a moving Car using display independent scales
Created by : Muhammad Rafeek & Rohan Philip
*/


#include<graphics.h>
#include<stdio.h>

void main()
{
    int gd=DETECT,gm;
    int x=0,maxx,maxy,stepx,stepy,displacement;
    int p[16];
    initgraph(&gd,&gm,"C:\\PROGRA~1\\TC\\BGI");   //Change this path in case of error
    maxx=getmaxx();
    maxy=getmaxy();
    stepx=maxx/40;
    stepy=maxy/15;
    displacement=maxx/120;

    p[1]=maxy-2*stepy;
    p[3]=maxy-3*stepy;
    p[5]=maxy-4*stepy;
    p[7]=p[5];
    p[9]=p[3];
    p[11]=p[3]+stepy/4;
    p[13]=p[1];
    p[15]=p[1];

    while(!kbhit())
    {
        cleardevice();
        p[0]=x;
        p[2]=x;
        p[4]=x+stepx;
        p[6]=x+stepx*4;
        p[8]=x+stepx*6;
        p[10]=x+stepx*8;
        p[12]=x+stepx*8;
	p[14]=p[0];
        setcolor(LIGHTBLUE);
        setfillstyle(9,BLUE);
        fillpoly(7,p);
        setfillstyle(7,LIGHTGRAY);
        fillellipse(x+stepx,maxy-2*stepy,stepy/3,stepy/3);
        fillellipse(x+stepx*6,maxy-2*stepy,stepy/3,stepy/3);
        x+=displacement;
        x%=maxx;
	delay(60);
    }
    closegraph();
    getch();
}