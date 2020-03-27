/*Calculate the sum of individual digits of an entered number*/

#include<iostream.h>
#include<conio.h>

void main()
{
    unsigned long a;           //a is the number to be inputed
    unsigned int S=0;            //S is sum
    clrscr();

    cout<<"Enter a number:";
    cin>>a;

    for(unsigned temp = a ; temp>0 ; temp/=10)
    {
        S+=(temp%10);
    }

    cout<<"\nThe sum of digits of "<<a<<" = "<<S;

    getch();
}

/*OUTPUT
Enter a number:231456

The sum of digits of 231456 = 21
*/
