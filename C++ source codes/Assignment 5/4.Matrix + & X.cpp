//Declare a class matrix and perform addition and multiplication of two matrices.

/*.Two matrices of size mxn and pxq can be multiplied only if n=p or m=q.
The resultant matrix is of the size mxq or nxp.

a b     u v w    au+bx  av+by  aw+bz
c d  x  x y z  = cu+dx  cv+dy  cw+dz
e f              eu+fx  ev+fy  ew+fz
*/

#include<iostream.h>
#include<conio.h>

#define ROW 50
#define COLUMN 50

class Matrix
{
    int M[ROW][COLUMN];
    unsigned int i,j,m,n;

    //i,j and k are the loop controllers
    //m and n = no of rows and columns of matrix

public:
    Matrix();
    int AcceptMatrix();
    void ShowMatrix();
    int ErrorCheck();
    Matrix operator + (Matrix);
    Matrix operator * (Matrix);
};

Matrix::Matrix()
{
    i=j=m=n=0;
}

int Matrix::AcceptMatrix()
{
    cout<<"\nEnter the number of rows and columns of matrix : ";
    cin>>m>>n;

    if(m>ROW||n>COLUMN)
    {
        cout<<"Sorry, Array size too large!\n"
        <<"Try once more ...";
        return 0;
    }

    cout<<"Enter the elements of matrix\n";
    for(i=0 ; i<m ; i++)
    {
        cout<<"Enter the elements of row "<<i+1<<" : ";
        for(j=0 ; j<n ; j++)
        cin>>M[i][j];
    }
    return 1;
}

Matrix Matrix::operator + (Matrix X)
{
    Matrix Temp;

    if(m!=X.m || n!=X.n)
    {
        cout<<"\nError!Incompatible array sizes!\n"
        <<"Matrix addition not possible!";
        Temp.i=0;
        return Temp;
    }

    Temp.m=m;
    Temp.n=n;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            Temp.M[i][j] = M[i][j] + X.M[i][j];
        }
    }

    Temp.i=1;
    return Temp;
}

Matrix Matrix::operator * (Matrix X)
{
    Matrix Temp;

    if(n!=X.m)
    {
        cout<<"\nError!Incompatible array sizes!\n"
        <<"Matrix multiplication not possible!";
        Temp.i=0;
        return Temp;
    }

    Temp.m=m;
    Temp.n=X.n;

    unsigned int k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<X.n;j++)
        {
            Temp.M[i][j]=0;
            for(k=0;k<n;k++)
            Temp.M[i][j] += M[i][k]*X.M[k][j];
        }
    }

    Temp.i=1;
    return Temp;
}

void Matrix::ShowMatrix()
{
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<'\t'<<M[i][j];
        }
        cout<<"\n";
    }
}

int Matrix::ErrorCheck()
{
    if(i!=0)
    return 1;
    else
    return 0;
}

void main()
{
    Matrix M1,M2,M3;
    int IsItOkay;
    clrscr();

    cout<<"\nEnter Matrix 1 -\n ";
    do
    {
        IsItOkay = M1.AcceptMatrix();
    }while(IsItOkay == 0);
    cout<<"\nMatrix 1 is :\n";
    M1.ShowMatrix();

    cout<<"\nEnter Matrix 2 -\n ";
    do
    {
        IsItOkay = M2.AcceptMatrix();
    }while(IsItOkay == 0);
    cout<<"\nMatrix 2 is :\n";
    M2.ShowMatrix();

    M3 = M1*M2;
    IsItOkay = M3.ErrorCheck();
    if(IsItOkay == 1)
    {
        cout<<"\nThe matrix obtained by multiplying the 2 given matrices :\n";
        M3.ShowMatrix();
    }

    M3 = M1+M2;
    IsItOkay = M3.ErrorCheck();
    if(IsItOkay == 1)
    {
        cout<<"\nThe matrix obtained by adding the 2 given matrices :\n";
        M3.ShowMatrix();
    }

    cout<<"\nPress any key to exit...";
    getch();
}

/*OUTPUT
Enter Matrix 1 -

Enter the number of rows and columns of matrix : 3 3
Enter the elements of matrix
Enter the elements of row 1 : 3 4 5
Enter the elements of row 2 : 1 2 3
Enter the elements of row 3 : 6 7 8

Matrix 1 is :
3       4       5
1       2       3
6       7       8

Enter Matrix 2 -

Enter the number of rows and columns of matrix : 3 3
Enter the elements of matrix
Enter the elements of row 1 : 12 3 4
Enter the elements of row 2 :  3 6 7
Enter the elements of row 3 : 15 5 9

Matrix 2 is :
12      3       4
3       6       7
15      5       9

The matrix obtained by multiplying the 2 given matrices :
123     58      85
63      30      45
213     100     145

The matrix obtained by adding the 2 given matrices :
15      7       9
4       8       10
21      12      17

Press any key to exit...
*/