void distance(struct Node *root,int *a,int *b,int level,int dist);
void topView(struct Node *root)
{
    int *a=(int *)calloc(100,sizeof(int));
     int *b=(int *)calloc(100,sizeof(int));
    for(int i=0;i<100;i++)
    {
        b[i]=100;
        a[i]=100;
    }
    distance(root,a,b,0,0);
    for(int i=0;i<100;i++)
    {
        if(b[i]!=100)
        cout<<b[i]<<" ";
    }
}
void distance(struct Node *root,int *a,int *b,int level,int dist)
{
    if(root==NULL)
    return;
    if(dist<0&&level<a[50+dist])
    {
    a[50+dist]=level;
    b[50+dist]=root->data;
    }
    if(dist>=0&&level<a[50+dist])
    {
    a[50+dist]=level;
    b[50+dist]=root->data;
    }
    distance(root->left,a,b,level+1,dist-1);
    distance(root->right,a,b,level+1,dist+1);
}
