long long sum(Node *root,long long *res,long long s);
long long treePathsSum(Node *root)
{
    long long res=0,s=0;
    sum(root,&res,s);
    return res;
}
long long sum(Node *root,long long *res,long long  s)
{
    if(root==NULL)
    return 0;
    s=s*10+root->data;
    if(root->left==NULL&&root->right==NULL)
    *res=*res+s;
    sum(root->left,res,s);
    sum(root->right,res,s);
}
