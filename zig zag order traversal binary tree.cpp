vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* root)
{
    vector<int>v;
    vector<vector<int>>v1;
    stack<struct TreeNode*>s1;
   stack<struct TreeNode*>s2;
   int h=0;
   struct  TreeNode *temp=NULL;
   s1.push(root);
   while(!s1.empty()||!s2.empty())
   {
       h=0;
    while(!s1.empty())
    {
     temp=s1.top();
     v.push_back(temp->val);
     s1.pop();
     if(temp->left)
      s2.push(temp->left);
     if(temp->right)
      s2.push(temp->right);
      h=1;
    }
    if(h==1)
    v1.push_back(v);
    v.clear();
    h=0;
    while(!s2.empty())
    {
     temp=s2.top();
     v.push_back(temp->val);
     s2.pop();
     if(temp->right)
      s1.push(temp->right);
     if(temp->left)
      s1.push(temp->left);
      h=1;
    }
    if(h==1)              // only push when we found data otherwise null vector wil be pushed
    v1.push_back(v);
     v.clear();
   }
   return v1;
}
