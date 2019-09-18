int exist(struct node *root,int data)
{
 if(root==NULL)
  return 0;
 if(root->data==data)
 {
  return 1;
 }
  int p=exist(root->left,data);
  if(p==1)
   return 1;
  p=exist(root->right,data);
  if(p==1)
   return 1;
   return 0;
}
