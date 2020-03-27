public class BinSearchTree
{
    Node root=null;

    void insertNode(int data)
    {
        Node nav=root,prev=null;
        while(nav!=null)
        {
            if(nav.data==data)
                return;
            prev=nav;
            nav = (data<nav.data)?nav.lchild:nav.rchild;
        }
        Node temp = new Node(data);
        if(root==null)
            root=temp;
        else if(data>prev.data)
            prev.rchild=temp;
        else
            prev.lchild=temp;
    }

    void deleteNode(int key)
    {
        Node nav=root,prev=null;
        while((nav!=null)&&(nav.data!=key))
        {
            prev=nav;
            nav=(key<nav.data)?nav.lchild:nav.rchild;
        }
        if(nav == null)
        {
            System.out.println("Key "+key+" not found");
            return;
        }
        //If nav.data==key,the following will run
        if( (nav.lchild==null) && (nav.rchild==null) )
        {
            if(prev.rchild==nav)
                prev.rchild = null;
            else
                prev.lchild = null;
        }
        else if( (nav.lchild!=null) && (nav.rchild==null) )
        {
            if(prev.rchild==nav)
                prev.rchild = nav.lchild;
            else
                prev.lchild = nav.lchild;
        }
        else if( (nav.lchild==null) && (nav.rchild!=null) )
        {
            if(prev.rchild==nav)
                prev.rchild = nav.rchild;
            else
                prev.lchild = nav.rchild;
        }
        else //when both nav.lchild!=null && nav.rchild!=null
        {
            Node current=nav.rchild;
            //The inorder successor will be found and stored in current
            if(current.lchild==null)
            {
                if( prev.lchild==nav)
                    prev.lchild=current;
                else
                    prev.rchild=current;
                current.lchild=nav.lchild;
            }
            else //when current.lchild!=null
            {
                Node p=current,t=current.lchild;
                while(t.lchild!=null)
                {
                    p=t;
                    t=t.lchild;
                }
                nav.data=t.data;
                p.lchild=t.rchild;
            } //end else if
        } // end else
    }

    void preOrder(Node nav)
    {
        if(nav!=null)
        {
            System.out.print(" "+nav.data);
            preOrder(nav.lchild);
            preOrder(nav.rchild);
        }
    }

    void inOrder(Node nav)
    {
        if(nav!=null)
        {
            inOrder(nav.lchild);
            System.out.print(" "+nav.data);
            inOrder(nav.rchild);
        }
    }

    void postOrder(Node nav)
    {
        if(nav!=null)
        {
            postOrder(nav.lchild);
            postOrder(nav.rchild);
            System.out.print(" "+nav.data);
        }
    }                  
}