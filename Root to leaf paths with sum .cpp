int sum(TreeNode *root,int *p,int x,vector<vector<int>>&v1,vector<int>&v);
vector<vector<int> > Solution::pathSum(TreeNode* A, int B)
{
    vector<vector<int>>v1;
    vector<int>v;
    int p=0;
    sum(A,&p,B,v1,v);
    return v1;
}
int sum(TreeNode *root,int *p,int x,vector<vector<int>>&v1,vector<int>&v)
{
   if(root==NULL)
    return 0;
    v.push_back(root->val);
    (*p)=(*p)+root->val;
   // cout<<*p<<" ";
    if(root->left)
    sum(root->left,p,x,v1,v);
    if((*p)==x&&root->left==NULL&&root->right==NULL)  //bcz we want root to leaf path
    {
        v1.push_back(v);
    }
    if(root->right)
      sum(root->right,p,x,v1,v);
      int s=0,s1=0;
      if(root->right)
      s=root->right->val;
      if(root->left)
      s1=root->left->val;
     if(((*p)==x)&&s!=s1&&root->left==NULL&&root->right==NULL)  //s and s1 bcz results are repeating
    {
        v1.push_back(v);
    }
    (*p)=(*p)-root->val;
    v.pop_back();
}
