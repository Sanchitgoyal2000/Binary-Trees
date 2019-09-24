int getSize(Node* node)
{
  if(node==NULL)
  return 0;
  int sum=1;
  sum=sum+getSize(node->left);
  sum=sum+getSize(node->right);
  return sum;
}
