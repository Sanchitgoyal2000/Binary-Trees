void print(Node *root,map<int,vector<int>>&m,int dist);
void diagonalPrint(Node *root)
{
    map<int,vector<int>>m;
  print(root,m,0);
  for(auto it=m.rbegin();it!=m.rend();it++)
  {
      for(int i=0;i<it->second.size();i++)
      {
         cout<<it->second[i]<<" ";
      }
  }
}
void print(Node *root,map<int,vector<int>>&m,int dist)
{
    if(root==NULL)
    return ;
    print(root->left,m,dist-1);
    m[dist].push_back(root->data);
    print(root->right,m,dist);   // dist of right node will remain same
}
