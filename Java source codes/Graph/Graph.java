import java.util.Scanner;

public class Graph
{
    boolean[][] adj;        //Adjacency Matrix
    int vertNum=0;      //Number of vertices

    public Graph(int vertNum)
    {
        this.vertNum=vertNum;
        adj = new boolean [vertNum][vertNum];
    }

    public void acceptAdjMatrix()
    {
        Scanner cin =new Scanner(System.in);
        System.out.println("Enter Adjacency Matrix :");
        for(int i=0;i<vertNum;i++)
            for(int j=0;j<vertNum;j++)
                if(cin.nextInt()!=0)
                    adj[i][j]=true;
                else
                    adj[i][j]=false;
    }

    public void breadthFirstSearch()
    {
        boolean[] visited = new boolean[vertNum];
        for(int i=0;i<vertNum;i++)
            visited[i]=false;
        System.out.println("\nBy Breadth First Search Vertices are :");
        for(int i=0;i<vertNum;i++)
        {
            if(visited[i]==false)
            { 
                visited[i]=true;
                System.out.print(" "+i);
            }
            for(int j=0;j<vertNum;j++)
                if( (adj[i][j]==true)&&(visited[j]==false) )
                { 
                    visited[j]=true;
                    System.out.print(" "+j);
            }
        }
    }

    public void depthFirstSearch()
    {

        boolean[] visited = new boolean[vertNum];
        for(int i=0;i<vertNum;i++)
            visited[i]=false;
        System.out.println("\nBy Depth First Search Vertices are :");
        for(int i=0;i<vertNum;i++)
            if(visited[i]==false)
                visit(i,visited);
    }

    public void visit(int i,boolean[] visited)
    {
        visited[i]=true;
        System.out.print(" "+i);
        for(int j=0;j<vertNum;j++)
            if( (adj[i][j]==true)&&(visited[j]==false) )
                visit(j,visited);
    }
}