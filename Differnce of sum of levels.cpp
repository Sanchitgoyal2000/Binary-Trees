int getLevelDiff(Node *root)
{
   queue<struct Node*>q;
   q.push(root);
   q.push(NULL);
   int c=0,s=root->data,s1=0;
   while(!q.empty())
   {
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
        if(q.size()==1&&q.front()==NULL)  // this condition must be here only
        break;                            //otherwiae segmentation fault
        if(c%2==0)                        //bcz we are accessing value of null
        s=s+q.front()->data;
        else
        s1=s1+q.front()->data;
   }
   return s-s1;
}
