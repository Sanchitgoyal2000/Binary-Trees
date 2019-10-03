int isBalanced1(Node *root);
bool isBalanced(Node *root)
{
    int p=isBalanced1(root);
    if(p==-1)
    return 0;
    return 1;
}
int isBalanced1(Node *root)
{
    if(root==NULL)
    return 0;
    int p1=1,p2=1;
     p1=isBalanced1(root->left);
     if(p1==-1)
     return -1;
     p2=isBalanced1(root->right);
     if(p2==-1)
     return -1;
     if(p2-p1>1||p1-p2>1)
     return -1;
    return p1+1>p2+1?p1+1:p2+1;         // +1 to add height of current node
}
