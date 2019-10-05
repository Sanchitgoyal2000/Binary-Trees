int binaryheight(TreeNode *root);
int Solution::maxDepth(TreeNode* A)
{
    int p=binaryheight(A->left);
    int p1=binaryheight(A->right);
    return p+1>p1?p+1:p1+1;
}
int binaryheight(TreeNode *root)
{
         if(root==NULL)
             return 0;
        int h=1,h1=1;
        h=h+binaryheight(root->left);
        h1=h1+binaryheight(root->right);
        if(h1>h)
           h=h1;
        return h;
    }

