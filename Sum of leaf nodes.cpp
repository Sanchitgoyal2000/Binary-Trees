int sumLeaf(Node* root)
{
    int sum=0;
    if(root==NULL)
    return 0;
    sum=sum+sumLeaf(root->left);
    sum=sum+sumLeaf(root->right);
    if(root->left==NULL&root->right==NULL)
    {
    sum=sum+root->data;
    }
    return sum;
}
