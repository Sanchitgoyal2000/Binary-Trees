void leftView(Node *root)
{
 queue<struct Node *>q;
 if(root==NULL)
 return;
  q.push(root);
 q.push(NULL);
 cout<<q.front()->data<<" ";
 while(!q.empty())
 {
   if(q.front()->left!=NULL)
    q.push(q.front()->left);
   if(q.front()->right!=NULL)
    q.push(q.front()->right);
    q.pop();
     if(q.front()==NULL&&q.size()==1)  //Must be here
      break;
    if(q.front()==NULL)
    {
     q.pop();
     cout<<q.front()->data<<" ";
     q.push(NULL);
    }
 }
}
