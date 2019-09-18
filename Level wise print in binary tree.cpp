include<queue>
void levelOrder(Node* root)
{
 queue<struct Node *>q;
  q.push(root);
 q.push(NULL);
 while(!q.empty())
 {
  if(q.front()!=NULL)
   cout<<q.front()->data<<" ";
   if(q.front()->left!=NULL)
    q.push(q.front()->left);
   if(q.front()->right!=NULL)
    q.push(q.front()->right);
    q.pop();
    if(q.front()==NULL)
    {
        cout<<"$ ";  //to sepaate levels
     q.pop();
     q.push(NULL);
    }
  if(q.front()==NULL&&q.size()==1)
   break;
 }
}
