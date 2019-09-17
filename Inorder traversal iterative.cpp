vector<int> Solution::inorderTraversal(TreeNode* A)
{
    stack<struct TreeNode *>s;  //  to store address
    vector<int>v;
    struct TreeNode *curr=A;         //root node
    while(!s.empty()||curr!=NULL)
    {
        while(curr!=NULL)
        {
          s.push(curr);
          curr=curr->left;            // traversing only left nodes
        }
        v.push_back(s.top()->val);
        curr=s.top()->right;      // as left being checked above now check right node
        s.pop();
    }
    return v;
}
