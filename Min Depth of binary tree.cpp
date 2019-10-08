int depth(TreeNode *root,int *min,int h);
int Solution::minDepth(TreeNode* A)
{
    if(A==NULL)
    return 0;
    int min=INT_MAX,h=1;
   depth(A,&min,h);
}
int depth(TreeNode *root,int *min,int h)
{
    if(root==NULL)
    return 0;
    if(h<*min&&root->left==NULL&&root->right==NULL)
    *min=h;
    depth(root->left,min,h+1);
    depth(root->right,min,h+1);
    return *min;
}
