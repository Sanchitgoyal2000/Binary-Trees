void fun(struct node *root,int dist,int *a,int *n);
int cmp(const void *a,const void *b);
int cmp(const void *a,const void *b)
{
    return (*(int *)a) - (*(int *)b);
}
int isFoldable(struct node *root)
{
    if(root==NULL)
    return 1;
   int *p=(int *)malloc(10000*sizeof(int));;
   int *p1=(int *)malloc(10000*sizeof(int));
   int n=0,m=0;
   if(root->left)
     fun(root->left,-1,p,&n);
   if(root->right)
     fun(root->right,1,p1,&m);
   qsort(p,n,sizeof(int),cmp);
   qsort(p1,m,sizeof(int),cmp);
   int j=m-1;
   if(n!=m)
     return 0;
 for(int i=0;i<n&&j>=0;i++)
 {
     if(((-1)*p[i])!=p1[j])
       return 0;
     j--;
 }
   return 1;
}

void fun(struct node *root,int dist,int *a,int *n)
{
    if(root==NULL)
    return;
    a[*n]=dist;
    (*n)++;
    fun(root->left,dist-1,a,n);
    fun(root->right,dist+1,a,n);
}
