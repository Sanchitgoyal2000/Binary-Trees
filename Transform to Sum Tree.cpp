int fun(Node *root);
void toSumTree(Node *node)
{
    if(node==NULL)
    return;
    fun(node);
}
int fun(Node *root)
{
    if(root==NULL)
    return 0;
    int p=0,p1=0;
    if(root->left)
    p=root->left->data;
    if(root->right)
    p1=root->right->data;
    p=p+fun(root->left);
    p1=p1+fun(root->right);
    root->data=p+p1;
    return p+p1;
}
