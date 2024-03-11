/*

void ksum(Node* root,int&ans,int&k)
{
    if(!root) return ;
   
    ksum(root->left,ans,k);
     k--;
    if(k>=0) ans+=root->data;
     ksum(root->right,ans,k);
    if(k<0) return;
}
// Function to find ceil of a given input in BST. If input is more 
// than the max key in BST, return -1 
int sum(Node* root, int k) 
{ 
  
    // Your code here
    int ans=0;
    ksum(root,ans,k);
    
    
    return ans;
} 





*/