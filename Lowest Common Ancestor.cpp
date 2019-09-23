Node * lca(Node* root ,int n1 ,int n2 ) // this o]sol works if both nodes are present in tree
{
    if((root==NULL))
    return NULL;
    if(root->data==n1||root->data==n2)
    return root;
    struct Node *a=lca(root->left,n1,n2);
    struct Node *b=lca(root->right,n1,n2);
    if(a==NULL&&b==NULL)
    return NULL;
    if(a!=NULL&&b!=NULL)   // means this is answer as node is getting result from both sides
    return root;
    return a!=NULL?a:b;
}
// another method to store path and find common node;
