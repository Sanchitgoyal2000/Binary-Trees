bool isCousins(Node *root, int x, int y)
{
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    int level1=0,level2=0,cmp=-1,cmp1=-1,c=0,h=0,hh=0;
    if(root->data==x||root->data==y) // corner case as root level will always be diffrent from other node level so return false directly
    {
        return false;// root level is zero.
    }
    while(!q.empty())
    {
        Node *temp=(Node *)malloc(sizeof(Node *));
        temp=q.front();
        if(temp==NULL)
        {
            q.pop();
            temp=q.front();
            c++;
            q.push(NULL);
        }
        q.pop();
        if(temp->right)
        {
            q.push(temp->right);
            if(temp->right->data==x||temp->right->data==y)
            {
                if(h==1)
                {

                    cmp1=temp->data;
                    level2=c;
                    h=0;
                    break;
                }
                h=1;
               cmp=temp->data;
               level1=c;
            }
        }
        if(temp->left)
        {
            q.push(temp->left);
            if(temp->left->data==x||temp->left->data==y)
            {

                 if(hh==1)
                {

                    cmp=temp->data;
                    level1=c;
                    hh=0;
                    break;
                }
                hh=1;
               cmp1=temp->data;
               level2=c;
            }
        }
        if(q.size()==1&&q.front()==NULL)
        break;
    }
    if(level1==level2)
    {
        if(cmp!=cmp1)
        return true;
    }
    return false;
}
