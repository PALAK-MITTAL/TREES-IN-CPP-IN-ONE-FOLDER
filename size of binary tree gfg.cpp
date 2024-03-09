// solution1
/*   

int countNodes(TreeNode* root) {
     if(root==NULL) return 0;
    return (1 + countNodes(root->left) + countNodes(root->right));
    }

*/


//solution2

/*     

void totalnodes(Node*root,int&count){
    if(root==NULL) return;
    count++;
     totalnodes(root->left,count);
      totalnodes(root->right,count);
}

int getSize(Node* root)
{
   // Your code here
   int count=0;
    totalnodes(root,count);
    return count;
}

*/