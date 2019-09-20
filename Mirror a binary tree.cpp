struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
void mirror(Node* node)
{
     if(node==NULL)
     return ;
     mirror(node->left);
     mirror(node->right);
     temp=node->right;
     node->right=node->left;
     node->left=temp;
}
