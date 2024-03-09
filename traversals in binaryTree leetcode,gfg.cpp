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

// preorder= root left right
void preOrder(Node*root){
  if(root==NULL){
    return;
  }
  //root
  cout<<root->data<<" ";
  //left
  preOrder(root->left);
  //right
  preOrder(root->right);
}

//inorder= left root right
void inOrder(Node*root){
    if(root==NULL){
    return;
  }
  //left
  inOrder(root->left);
  //root
  cout<<root->data<<" ";
  //right
  inOrder(root->right);
}

//postOrder= left right root
void postOrder(Node*root){
  if(root==NULL){
    return;
  }
  //left
  postOrder(root->left);
  //right
  postOrder(root->right);
  //root
  cout<<root->data<<" ";
}


int main(){

cout<<"enter the value of root node: ";
Node*root;
root=binaryTree();

cout<<"preorder : ";
preOrder(root);
cout<<endl;

cout<<"inorder : ";
inOrder(root);
cout<<endl;

cout<<"postorder : ";
postOrder(root);
cout<<endl;

  return 0;
}
