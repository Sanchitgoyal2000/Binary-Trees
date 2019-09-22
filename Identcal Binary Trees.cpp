int Solution::isSameTree(TreeNode* A, TreeNode* B)
{
    if(A==NULL&&B==NULL)
     return 1;
     if(A==NULL||B==NULL)
     return 0;
    if(A->val!=B->val)  // compare values
    return 0;
    int p=isSameTree(A->left,B->left);
    if(p==0)
    return 0;
    p=isSameTree(A->right,B->right);
    if(p==0)
    return 0;
    return 1;
}
