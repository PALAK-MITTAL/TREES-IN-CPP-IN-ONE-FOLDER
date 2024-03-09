#include<iostream>
using namespace std;

class Node{

public:
int data;
Node* left;
Node* right;
Node(int value){
  data=value;
  right=left=NULL;
}

};

Node* insert_bst(Node*root,int target){

   if(!root){
    Node*temp=new Node(target);
    return temp;
   }

  if(target<root->data){
     root->left=insert_bst(root->left,target);
  }
  else{
    root->right=insert_bst(root->right,target);
  }

  return root;

}

void inorder(Node*root){
  if(!root) return;

// left
inorder(root->left);
//node
cout<<root->data<<" ";
//right
inorder(root->right);
}

int main(){

int arr[]={2,3,4,7,1,6,8};
int n=7;
Node*root=NULL;

for(int i=0;i<n;i++){
  root =insert_bst(root,arr[i]);
}

inorder(root);

  return 0;
}

// I have assumed that if duplicates will be there then we will insert it at right side
//if we want to get inorder of a BST then we will get data values in ascending order