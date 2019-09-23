int find(TreeNode *root,int n1);
int helper(TreeNode *root,int n1,int n2);
int Solution::lca(TreeNode* root, int n1, int n2)
{
    int p=find(root,n1);
    int q=find(root,n2);
     if(p==0||q==0)
    return -1;
    return helper(root,n1,n2);
}
int helper(TreeNode *root,int n1,int n2)
{
    if((root==NULL))
    return -1;
    if(root->val==n1||root->val==n2)
    return root->val;
    int a=helper(root->left,n1,n2);
    int b=helper(root->right,n1,n2);
    if(a==-1&&b==-1)
    return -1;
    if(a!=-1&&b!=-1)   // means this is answer as node is getting result from both sides
    return root->val;
    return a!=-1?a:b;
}
int find(TreeNode *root,int n1)
{
 if(root==NULL)
 return 0;
 if(root->val==n1)
 return 1;
 int p=find(root->left,n1);
 if(p==1)
 return 1;
 p=find(root->right,n1);
 if(p==1)
 return 1;
 return 0;
}
