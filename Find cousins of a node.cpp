void isCousins(Node *root, int x, int y)
{
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    int h=0,c=0;
    int a[100],p=0,cmp;
    int xx=7;                // cousins of this node;
    while(!q.empty())
    {
        Node *temp=(Node *)malloc(sizeof(Node *));
        temp=q.front();
        if(temp==NULL&&h==1)
        break;
        if(temp==NULL)
        {
            q.pop();
            temp=q.front();
            c++;              //level
            q.push(NULL);
        }
        q.pop();
        if(temp->left)
        {
            if(temp->left->data==xx)
            {
                h=1;
                cmp=temp->data;     //parent of node
            }
             if((h==1)&&temp->data!=cmp)
              {

                  a[p]=temp->left->data;
                  p++;
              }
            q.push(temp->left);
        }
        if(temp->right)
        {
            if(temp->right->data==xx)
            {
                   h=1;
              cmp=temp->data;
            }
              if((h==1)&&temp->data!=cmp)
              {
                  a[p]=temp->right->data;
                  p++;
              }
            q.push(temp->right);
        }
        if(q.size()==1&&q.front()==NULL)
        break;
    }
    for(int i=0;i<p;i++)
      cout<<a[i]<<" ";
}
