#include<queue>
int getLevel(struct Node *root, int target)
{
    queue<struct Node *>q;
    q.push(root);
    q.push(NULL);
 int c=1;
 while(!q.empty())
 {
     if(q.front()->data==target)
      return c;
     if(q.front()->left!=NULL)
      q.push(q.front()->left);
     if(q.front()->right!=NULL)
      q.push(q.front()->right);
      q.pop();
     if(q.front()==NULL)
     {
        c++;
        q.pop();
        q.push(NULL);
     }
  if(q.front()==NULL&&q.size()==1)
   break;
}
return 0;
}
