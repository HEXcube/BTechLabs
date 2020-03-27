/*Allocate memory using new operator for 10 integers.
  Find the range of the given data*/

#include<iostream.h>
#include<conio.h>

void main()
{
 int *p;
 clrscr();

  p = new int [10];
 cout<<"Enter 10 integers : \n";
 for(int i = 0; i<10 ; i++ )
    cin>>p[i];
 cout<<"\nContents of the dynamically allocated array are :\n";
 for(i = 0; i<10 ; i++ )
    cout<<p[i]<<endl;
 cout<<"\nThe integer array p[10] is dynamically allocated\n"
     <<"\t* from addresses: "<<(unsigned int)p<<" to "<<(unsigned int)(p+10)-1
     <<"\n\t* has range     : p[0] to p[9]"
     <<"\n\t* can store     : 10 integers"
     <<"\n\t* and takes     : "<<sizeof(int)*10<<" bytes of size";

 getch();
}

/*OUTPUT
Enter 10 integers :
10 20 30 40 50
60 70 80 90 99

Contents of the dynamically allocated array are :
10
20
30
40
50
60
70
80
90
99

The integer array p[10] is dynamically allocated
        * from addresses: 4006 to 4025
        * has range     : p[0] to p[9]
        * can store     : 10 integers
        * and takes     : 20 bytes of size
*/