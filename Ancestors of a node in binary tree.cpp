bool printAncestors1(struct Node *root, int target);
vector<int>v;
bool printAncestors(struct Node *root, int target)
{
    printAncestors1(root,target);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<"\n";
    v.clear();
}
bool printAncestors1(struct Node *root, int target)
{
    if(root==NULL)
    return 0;
    if(root->data==target)
    return 1;
    int p=printAncestors1(root->left,target);
    if(p==1)
    {
        v.push_back(root->data);
        return 1;
    }
    p=printAncestors1(root->right,target);
    if(p==1)
    {
       v.push_back(root->data);
        return 1;
    }
}
