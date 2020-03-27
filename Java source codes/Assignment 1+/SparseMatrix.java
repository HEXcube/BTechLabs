import java.util.Scanner;

class SparseMatrix
{
    int row,col,s_row;
    int[][] Arr,Rep;
    //Arr is the real matrix and Rep is the sparse matrix representation

    SparseMatrix()
    {
        row=col=s_row=0;
        Arr=Rep=null;
    }

    public void acceptMatrix()
    {
        Scanner y = new Scanner(System.in);
        System.out.print("Number of Rows : ");
        row = y.nextInt();
        System.out.print("Number of Columns : ");
        col = y.nextInt();

        Arr = new int[row][col];
        System.out.print("Enter the elements :\n");
        for(int i=0 ; i<row ; i++)
        {
            System.out.print("Row "+(i+1)+" : ");
            for(int j=0 ; j<col ; j++)
                Arr[i][j] = y.nextInt();
        }
    }

    public void displaySparse()
    {
        for(int i=0 ; i<s_row ; i++)
        {
            for(int j=0 ; j<3 ; j++)
                System.out.print("\t"+Rep[i][j]);
            System.out.print("\n");
        }
    }

    public boolean sparseRep()
    {
        int count=0;
        for(int i=0 ; i<row ; i++)
            for(int j=0 ; j<col ; j++)
                if(Arr[i][j] == 0)
                    count++;

        if(count>row*col/2)
        {
            int non0 = row*col - count;
            //non0 denotes number of non zero elements
            Rep = new int[non0+1][3];
            Rep[0][0] = row;
            Rep[0][1] = col;
            Rep[0][2] = non0;

            s_row = 1;
            for(int i=0 ; i<row ; i++)
                for(int j=0 ; j<col ; j++)
                    if(Arr[i][j] != 0)
                    {
                        Rep[s_row][0] = i;
                        Rep[s_row][1] = j;
                        Rep[s_row][2] = Arr[i][j];
                        s_row++;
            }

            System.out.println("The sparse matrix representation is :");
            displaySparse();
            return true;
        }
        else
        {
            System.out.println("\nThe entered matrix is not a sparse matrix.");
            return false;
        }
    }

    public SparseMatrix addSparse(SparseMatrix X)
    {
        if((row!=X.row)&&(col!=X.col))
        {
            System.out.print("Matrices of different sizes!\n"+
                "Addition not possible");
            return null;
        }

        SparseMatrix Temp = new SparseMatrix();
        Temp.Rep=new int[s_row+X.s_row][3];
        Temp.row=row;
        Temp.col=col;

        Temp.Rep[0][0] = row;
        Temp.Rep[0][1] = col;
        int i=1,j=1,k=1;
        while((i<s_row)&&(j<X.s_row))
        {
            if(Rep[i][0]==X.Rep[j][0])
            {
                if(Rep[i][1]==X.Rep[j][1])
                {
                    Temp.Rep[k][0]=Rep[i][0];
                    Temp.Rep[k][1]=Rep[i][1];
                    Temp.Rep[k][2]=Rep[i][2]+X.Rep[i][2];
                    i++;j++;k++;
                }
                else if(Rep[i][1]<X.Rep[j][1])
                {
                    Temp.Rep[k][0]=Rep[i][0];
                    Temp.Rep[k][1]=Rep[i][1];
                    Temp.Rep[k][2]=Rep[i][2];
                    i++;k++;
                }
                else
                {
                    Temp.Rep[k][0]=X.Rep[j][0];
                    Temp.Rep[k][1]=X.Rep[j][1];
                    Temp.Rep[k][2]=X.Rep[j][2];
                    j++;k++;
                }
            }
            else if(Rep[i][0]<X.Rep[j][0])
            {
                Temp.Rep[k][0]=Rep[i][0];
                Temp.Rep[k][1]=Rep[i][1];
                Temp.Rep[k][2]=Rep[i][2];
                i++;k++;
            }
            else
            {
                Temp.Rep[k][0]=X.Rep[j][0];
                Temp.Rep[k][1]=X.Rep[j][1];
                Temp.Rep[k][2]=X.Rep[j][2];
                j++;k++;
            }
        }
        while(i<s_row)
        {
            Temp.Rep[k][0]=Rep[i][0];
            Temp.Rep[k][1]=Rep[i][1];
            Temp.Rep[k][2]=Rep[i][2];
            i++;k++;
        }
        while(j<X.s_row)
        {
            Temp.Rep[k][0]=X.Rep[j][0];
            Temp.Rep[k][1]=X.Rep[j][1];
            Temp.Rep[k][2]=X.Rep[j][2];
            j++;k++;
        }
        Temp.s_row=k;
        Temp.Rep[0][2]=k-1;
        return Temp;
    }
}