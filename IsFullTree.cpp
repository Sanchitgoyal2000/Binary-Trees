bool isFullTree (struct Node* root)
{
//add code here
if(root==NULL)
return 1;
if(root->right==NULL&&root->left!=NULL)
 return 0;
if(root->right!=NULL&&root->left==NULL)
 return 0;
bool p=isFullTree(root->left);
if(p==0)
return 0;
p=isFullTree(root->right);
if(p==0)
return 0;
return 1;
}
