void kth(TreeNode *root,int a[], int *p);
int Solution::t2Sum(TreeNode* root, int B)
{
     if(root==NULL)
    return 0;
    int p=0;
    int *a=( int *)malloc(6000000*sizeof( int));
    kth(root,a,&p);
    if(p==1)
    return 0;
    int m=0,n=p-1;
    while(m<n)
    {
        if(a[m]+a[n]>B)
        n--;
        else if(a[m]+a[n]<B)
        m++;
        else if(a[m]+a[n]==B)
        {
            return 1;
        }
    }
    return 0;
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
