int countLeaves(Node* root)
{
    int s=0;
    if(root==NULL)
    return 0;
    if(root->left==NULL&&root->right==NULL)
    return 1;
    s=s+countLeaves(root->left);
    s=s+countLeaves(root->right);
    return s;
}
