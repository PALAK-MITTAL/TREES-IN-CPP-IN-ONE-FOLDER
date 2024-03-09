


/*      solution

void countingleaves(Node*root,int&count){
    if(!root) return ;
    if(!root->left && !root->right) count++;
     countingleaves(root->left,count);
      countingleaves(root->right,count);
}   
int countLeaves(Node* root)
{
  // Your code here
  int count=0;
  countingleaves(root,count);
  return count;
}


*/

