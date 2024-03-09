/*
#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node*left,*right;
  Node(int data){
    this->data=data;
    left=NULL;
    right=NULL;
  }
};

Node* binaryTree(){
  
  int x;
  cin>>x;
  if(x==-1){
    return NULL;
  }
  Node* temp= new Node(x);
  cout<<"enter the value at left side of "<<x<<": ";
  temp->left=binaryTree();
  
  cout<<"enter the value at right side of "<<x<<": ";
  temp->right=binaryTree();
  return temp;
}

int main(){

cout<<"enter the value of root node: ";
Node*root;

root=binaryTree();

  return 0;
}

*/