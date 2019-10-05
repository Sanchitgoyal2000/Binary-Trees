void kth(TreeNode *root,int a[], int *p);
int Solution::kthsmallest(TreeNode* root, int B)
{
    if(root==NULL)
    return 0;
    int p=0;
    int *a=( int *)malloc(6000000*sizeof( int));   // here array size should be more
    kth(root,a,&p);
    return a[B-1];
}
void kth(TreeNode *root,int a[], int *p)
{
    if(root==NULL)
    return;
    kth(root->left,a,p);
    a[*p]=root->val;
    (*p)++;
    kth(root->right,a,p);
}
