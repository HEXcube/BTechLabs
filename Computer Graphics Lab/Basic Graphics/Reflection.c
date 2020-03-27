#include<graphics.h>
#include<stdio.h>
#include<math.h>
void main()
 {
  int gd=DETECT,gm,p[25],d,a,n,edge,i,x,y,rx,ry,k,t;
int c;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
printf("enter the no.of edges of the polygon");
scanf("%d",&edge);
printf("entr the coordinates");
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

	  printf("enter the axis with respect to which u want to reflect.."
		  "0 for x axis and 1 for y axis  ");
	 scanf("%d",&c);
	 t=p[1];
	 n--;


if(c==0)
{
  if((n)%2==0)
     {
	for(i=0;i<edge-1;i++)
	 { p[2*i+1]= p[2*i+1]+50;
	   }

	 p[2*i+1]= (p[2*i+1]+50)+( p[2*i+1]-t);
	}
    else
	 {
	for(i=0;i<edge-2;i++)
	 {
	   p[2*i+1]= p[2*i+1]+50;
	  }
	  p[2*i+1]= (p[2*i+1]+50)+( p[2*i+1]-t);
	 }
	 n++;

	}
	  drawpoly(n,p);
 getch();
 closegraph();
  }


