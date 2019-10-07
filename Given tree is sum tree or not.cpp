int fun(Node *root,bool *res);
bool isSumTree(Node* root)
{
      if(root==NULL)
          return true;
          bool res=true;
       fun(root,&res);
       return res;
}
int fun(Node *root,bool *res)
{
    if(root==NULL)
    return 0;
    int p=0,p1=0;
    if(root->left)
    p=root->left->data;
    if(root->right)
    p1=root->right->data;
    p=p+fun(root->left,res);
    p1=p1+fun(root->right,res);
    if(p!=0||p1!=0)              // here use or
    {                         // if both p and p1 are zer then dont enter in this condition
    if(p+p1!=root->data)
    *res=false;
    }
    return p+p1;
}
