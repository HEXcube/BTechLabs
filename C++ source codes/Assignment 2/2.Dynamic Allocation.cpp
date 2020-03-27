/*Program to display the range of a dynamically allocated
  interger array*/

#include<iostream.h>
#include<conio.h>

void main()
{
 int *p;
 unsigned int n;
 clrscr();
 
 cout<<"Enter the size of array : ";cin>>n;
 p = new int [n];
 cout<<"The integer array p["<<n<<"] is dynamically allocated\n"
       "\t* from addresses: "<<(unsigned int)p<<" to "<<(unsigned int)(p+n)-1
     <<"\n\t* has range     : p[0] to p["<<n-1<<"]"
     <<"\n\t* can store     : "<<n<<" integers"
     <<"\n\t* and takes     : "<<sizeof(int)*n<<" bytes of size";
 getch();
}

/*OUTPUT
Enter the size of array : 5
The integer array p[5] is dynamically allocated
	* from addresses: 3956 to 3965
	* has range     : p[0] to p[4]
	* can store     : 5 integers
	* and takes     : 10 bytes of size
*/