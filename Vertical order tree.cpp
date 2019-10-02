 #include<vector>
 using namespace std;
void verticalOrder(Node *root)// order of elements in vector may change
{
    if(!root)
    return;
    //Your code here
    map<int,vector<int>>m;
    queue<pair<Node *,int>>q;
    q.push(make_pair(root,0));
    int dist=0;
    while(!q.empty())
    {
        pair<Node*,int>t=q.front();
        q.pop();
        dist=t.second;
        Node *temp=t.first;
        m[dist].push_back(temp->data);
        if(temp->left)
         q.push(make_pair(root->left,dist-1));
        if(temp->right)
         q.push(make_pair(root->right,dist+1));
    }
     map<int,vector<int>>::iterator it;
   for(it=m.begin();it!=m.end();it++)
    {
       for(int j=0;j<it->second.size();j++)
       cout<<it->second[j]<<" ";
    }
}
//--------------------------------------------------------------
//Using map only .Here order of elements in vector may change
 #include<vector>
 using namespace std;
void vertical(Node *root,map<int,vector<int>>&m,int dist);
void verticalOrder(Node *root)
{
    //Your code here
    map<int,vector<int>>m;
    vertical(root,m,0);
    map<int,vector<int>>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
       for(int j=0;j<it->second.size();j++)
       cout<<it->second[j]<<" ";
    }
    cout<<"\n";
}
void vertical(Node *root,map<int,vector<int>>&m,int dist)
{
    if(root==NULL)
    return;
    m[dist].push_back(root->data);
    vertical(root->left,m,dist-1);
    vertical(root->right,m,dist+1);
}
