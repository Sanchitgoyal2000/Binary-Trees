void flatten1(TreeNode *A);
TreeNode *B=(TreeNode*)malloc(sizeof(TreeNode));
TreeNode* Solution::flatten(TreeNode* A)
{
    TreeNode *temp=B;                 //because B is changing So store B at some position.
    flatten1(A);
    temp->left=NULL;
    B->left=NULL;                // always put NULL at last
    return temp->right;
}
void flatten1(TreeNode *A)
{
  if(A==NULL)
   return;
  TreeNode *BB=(TreeNode*)malloc(sizeof( TreeNode));
    BB->val=A->val;
   B->right=BB;
   B->left=NULL;
   B=BB;
   flatten1(A->left);
   flatten1(A->right);
}
