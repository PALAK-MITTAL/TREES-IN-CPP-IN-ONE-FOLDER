   // APPROACH 1 THAT IS USING QUEUE
#include<iostream>
#include<queue>
using namespace std;

class Node{
  public:
  int data;
  Node*left;
  Node* right;

  Node(int data){
      this->data=data;
      left=NULL;
      right=NULL;
  }

};

int main(){

queue<Node*>q;
int rootValue, leftValue, rightValue;
cout<<"enter the root value: ";
cin>>rootValue;

Node* root= new Node(rootValue);
q.push(root);

while(!q.empty()){
  Node*temp=q.front();
  q.pop();
  cout<<"enter the left child value of "<<temp->data<<": ";
  cin>>leftValue;

  if(leftValue!=-1){
    temp->left=new Node(leftValue);
    q.push(temp->left);
  }

cout<<"enter the right child value of "<<temp->data<<": ";
  cin>>rightValue;
  cout<<endl;
  if(rightValue!=-1){
    temp->right=new Node(rightValue);
    q.push(temp->right);
  }

}


  return 0;
}
