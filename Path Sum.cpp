 bool path(TreeNode *root,int *p,int res);
int Solution::hasPathSum(TreeNode* root, int B)
{
    int p=0;
    bool k= path(root,&p,B);
    if(k==true)
    return 1;
    return 0;
}
bool path(TreeNode *root,int *p,int res)
{
 if(root==NULL)
  return false;
  *p=*p+root->val;
  if(*p==res&&root->left==NULL&&root->right==NULL)
   return true;
  int s=path(root->left,p,res);
  if(s==true)
   return true;
  s=path(root->right,p,res);
  if(s==true)
   return true;
   *p=*p-root->val;
   return false;
}
