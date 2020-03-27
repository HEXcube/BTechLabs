/*Program to find the quadrant where the point P(x,y) lies.*/
void main()
{
int x,y;
clrscr();
printf("Enter the coordinates of P(x,y) : ");
scanf("%d%d",&x,&y);
if(x>0)
{
 if(y>0)
 printf("The point P(%d,%d) lies in the 1st quadrant.",x,y);
 else
 printf("The point P(%d,%d) lies in the 4th quadrant.",x,y);
}
else
{
 if(y>0)
 printf("The point P(%d,%d) lies in the 2nd quadrant.",x,y);
 else
 {
  if(y<0)
  printf("The point P(%d,%d) lies in the 3rd quadrant.",x,y);
  else
  printf("The point P(%d,%d) is the origin.",x,y);
 }
}
getch();
}