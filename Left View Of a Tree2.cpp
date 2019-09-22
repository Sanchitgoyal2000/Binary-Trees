void left(struct Node *root,int level,int *maxlevel);
void leftView(Node *root)
{
 int maxlevel=0;
 left(root,1,&maxlevel);
}
void left(struct Node *root,int level,int *maxlevel)
{
    if(root==NULL)
    return;
    if(*maxlevel<level)
    {
        cout<<root->data<<" ";
        *maxlevel=level;
    }
    left(root->left,level+1,maxlevel);  //here maxlevel is address
    left(root->right,level+1,maxlevel);
}
