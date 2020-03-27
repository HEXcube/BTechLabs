/*Create a template for bubble sort*/
#include<iostream.h>
#include<conio.h>

template <class Type>
class Array
{
    Type A[100];
    unsigned int lim;           //Array Limits

public:
    void Accept();
    void sort();
    void Show();
};

template <class Type>
void Array<Type>::Accept()
{
    cout<<"How many elements do you wish to enter? : ";
    cin>>lim;
    cout<<"Enter the elements-\n";
    for(unsigned int i=0 ; i<lim ; i++ )
    {
        cout<<"Element "<<i+1<<" : ";
        cin>>A[i];
    }
}

template <class Type>
void Array<Type>::sort()
{
    //selection sort
    for(int i=0;i<lim-1;i++)
    {
	unsigned int min = i;
        for(int j=i+1;j<lim;j++)
        if(A[j] < A[min])
        min=j;

        if(min!=i)
        {
            Type tmp;
            tmp=A[i];
            A[i]=A[min];
            A[min]=tmp;
        }
    }
}

template <class Type>
void Array<Type>::Show()
{
    cout<<"\nContents of array after sorting are :\n";
    for(int i = 0; i<lim ; i++ )
    cout<<A[i]<<endl;
}

void main()
{
    clrscr();

    cout<<"\nInteger Array\n";
    Array<int> X;
    X.Accept();
    X.sort();
    X.Show();

    cout<<"\nCharacter Array\n";
    Array<char> Y;
    Y.Accept();
    Y.sort();
    Y.Show();

    cout<<"\nFloat Array\n";
    Array<float> Z;
    Z.Accept();
    Z.sort();
    Z.Show();

    cout<<"\nPress any key....";
    getch();
}

/*OUTPUT
Integer Array
How many elements do you wish to enter? : 5
Enter the elements-
Element 1 : 34
Element 2 : 56
Element 3 : 12
Element 4 : 69
Element 5 : 123

Contents of array after sorting are :
12
34
56
69
123

Character Array
How many elements do you wish to enter? : 4
Enter the elements-
Element 1 : q
Element 2 : a
Element 3 : g
Element 4 : x

Contents of array after sorting are :
a
g
q
x

Float Array
How many elements do you wish to enter? : 3
Enter the elements-
Element 1 : 12.9
Element 2 : 23.7
Element 3 : 5.0

Contents of array after sorting are :
5
12.9
23.700001

Press any key....
*/