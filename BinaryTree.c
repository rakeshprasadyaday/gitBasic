#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *left;
  struct node *right;
};

//newNode() allocates a given data and left,right pointer to NULL;

struct node* newNode(int data){

  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data=data;
  node->left=NULL;
  node->right=NULL;
  return(node);
}

//main function

int main(int argc, char const *argv[]) {
  /* code */
struct node *root=newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
printf("\n%d",root->data);
getchar();
  return 0;
}
