void right(struct Node *root,int level,int *maxlevel);
void rightView(Node *root)
{
  int maxlevel=0;
  right(root,1,&maxlevel);
}
void right(struct Node *root,int level,int *maxlevel)
{
    if(root==NULL)
     return;
    if(*maxlevel<level)
    {
        cout<<root->data<<" ";
        *maxlevel=level;
    }
    right(root->right,level+1,maxlevel);  //here maxlevel is address
    right(root->left,level+1,maxlevel);
}
