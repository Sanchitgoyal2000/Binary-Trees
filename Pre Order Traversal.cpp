vector<int> Solution::preorderTraversal(TreeNode* A)
{
    stack<struct TreeNode *>s;
    vector<int>v;
    struct TreeNode *curr=A;
    while(!s.empty()||curr!=NULL)
    {
        while(curr!=NULL)
        {
           s.push(curr);
          curr=curr->left;
        v.push_back(s.top()->val);
        }
        curr=s.top()->right;
        s.pop();
    }
    return v;
}
