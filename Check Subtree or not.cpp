bool subfun(Node *t1,Node *t2);
bool isSub(Node* T1, Node* T2,int *h);
bool isSubtree(Node* T1, Node* T2)
{
    int h=0;
    bool p=isSub(T1,T2,&h);
    if(h==0)                 // if subtree not found i.e no node of both trees are same;
    return false;
    return p;
}
bool isSub(Node* T1, Node* T2,int *h) {
   if(T1==NULL)
   return true;
   if(T1->data==T2->data)
   {
       *h=1;
        return subfun(T1,T2);
   }
   bool p;
  p= isSub(T1->left,T2,h);
   if(p==false)
   return false;
   p=isSub(T1->right,T2,h);
   if(p==false)
   return false;
   return true;
}
bool subfun(Node *t1,Node *t2)
{
    if((t1==NULL&&t2!=NULL)||(t1!=NULL&&t2==NULL))
    return false;
    if(t1==NULL&&t2==NULL)
    return true;
    if(t1->data!=t2->data)
    {
        return false;
    }
    bool p;
    p=subfun(t1->left,t2->left);
    if(p==false)
    return false;
    p=subfun(t1->right,t2->right);
    if(p==false)
    return false;
    return true;
}
