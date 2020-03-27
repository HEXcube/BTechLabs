#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	char s;
	int gd,gm,d,n,edge,i,p[25],x,y,tx,ty,a,ch;
	int sx,sy,rx,ry,k,xc,yc;
	int co,si;
	gd=DETECT;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	printf("\n\n enter the number of edges of polygone");
	scanf("%d",&edge);
	printf("enter coordinates");
	for(i=0;i<edge;i++)
	{
		scanf("%d%d",&x,&y);
		p[2*i]=x;
		p[2*i+1]=y;
	}
	p[2*i]=p[0];
	p[2*i+1]=p[1];
	n=edge+1;
	drawpoly(n,p);
	do
	{

		printf("enter your choice\n 1.translation\n 2.scale\n 3.rotation\n 4.reflection\n");
		scanf("%d",&a);
		switch(a)
		{
		case 1:printf("enter translation factor:");
			scanf("%d%d",&tx,&ty);
			for(i=0;i<=edge;i++)
			{
				p[2*i]=p[2*i]+tx;
				p[2*i+1]=p[2*i+1]+ty;
			}
			p[2*i]=p[0];
			p[2*i+1]=p[1];
			drawpoly(n,p);
			break;
		case 2:printf("enter scaling factor:");
			scanf("%d%d",&sx,&sy);
			for(i=0;i<=edge;i++)
			{
				p[2*i]=p[2*i]*sx;
				p[2*i+1]=p[2*i+1]*sy;
			}
			p[2*i]=p[0];
			p[2*i+1]=p[1];
			drawpoly(n,p);
			break;
		case 3:printf("enter pivot point:");
			scanf("%d%d",&rx,&ry);
			printf("enter the angle of rotation:");
			scanf("%d",&k);
			for(i=0;i<=edge;i++)
			{
				p[2*i]=p[2*i]-rx;
				p[2*i+1]=p[2*i+1]-ry;
			}
			p[2*i]=p[0];
			p[2*i+1]=p[1];
			co=cos(k*(3.14/180));
			si=sin(k*(3.14/180));
			for(i=0;i<=edge;i++)
			{
				p[2*i]=ceil((p[2*i]*co)-(p[2*i+1]*si))+rx;
				p[2*i+1]=ceil((p[2*i]*si)+(p[2*i+1]*co))+ry;
			}
			p[2*i]=p[0];
			p[2*i+1]=p[1];
			drawpoly(n,p);
			break;
		case 4: xc=getmaxx()/2;
			yc=getmaxy()/2;
			printf("xc=%d,yc=%d",xc,yc);
			for(i=0;i<=n;i++)
			  {
				if(p[2*i]<yc);
					p[2*i]=xc+p[2*i];
				if(p[2*i+1]>yc)
					p[2*i+1]=yc-(getmaxy()-p[2*i+1]);
			  }
			drawpoly(n,p);
			printf("\n1.reflection about x axis:\n2.reflection about y axis:");
			scanf("%d",&ch);
			if(ch==1)
			  {
				for(i=0;i<n;i++)
				  {
					p[2*i+1]=yc+(yc-p[2*i+1]);
				  }
			  }
			if(ch==2)
			  {
				for(i=0;i<n;i++)
				  {
					p[2*i]=xc-(p[2*i]-xc);
				  }
			  }
			drawpoly(n,p);
			break;
		default:printf("invalid input");
			break;
		}
	printf("press 1 to continue........");
	scanf("%d",&d);
	}
while(d==1);
closegraph();
getch();
}


