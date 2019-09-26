#include<conio.h>  //Universal Binary Tree in which root data is equal to to its both child data
#include<iostream>
#include<malloc.h>
#include<stack>
#include<queue>
using namespace std;
int zig(struct node *root);
struct node
{
 int data;
 struct node *left;
 struct node *right;
};
struct node* newNode(int data)
{
 struct node *newNode=(struct node*)malloc(sizeof(struct node));
 newNode->data=data;
 newNode->right=NULL;
 newNode->left=NULL;
 return newNode;  //return address of newnode
}
int maxi=INT_MIN;
int mini=INT_MAX;
int main()
{
  struct node *root = newNode(1);
  root->left        = newNode(1);
  root->right       = newNode(1);
  root->left->left  = newNode(4);
  root->left->right  = newNode(5);
  root->right->left  = newNode(6);
  root->right->right  = newNode(7);
  root->left->left->left  = newNode(4);
  root->left->right->left  = newNode(9);
  root->right->left->right  = newNode(6);
  struct node *head=(struct node*)malloc(sizeof(struct node));
  cout<<zig(root);
  return 0;
}
int zig(struct node *root)
{
 if(root==NULL)
  return 0;
 if(root->left==NULL&&root->right==NULL)
  return 1;
  int s=0;
 s=s+zig(root->left);
 s=s+zig(root->right);
 if(root->left==NULL)
 {
  if(root->data==root->right->data)
   s=s+1;
 }
  else if(root->right==NULL)
 {
  if(root->data==root->left->data)
   s=s+1;
 }
 else if(root->data==root->left->data&&root->data==root->right->data)
  s=s+1;
 return s;
}
