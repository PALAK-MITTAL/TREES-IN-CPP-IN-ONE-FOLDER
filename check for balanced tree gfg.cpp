

//  int height(Node*root, int &valid){
        
//         if(!root) return 0;
        
//         int L=height(root->left,valid);
//         int R=height(root->right,valid);
        
//         if(abs(L-R)>1) valid=0;
        
//         return 1+max(L,R);
//     }
    
//     //Function to check whether a binary tree is balanced or not.
//     bool isBalanced(Node *root)
//     {
//         //  Your Code here
//         int valid=1;
//         height(root,valid);
        
//         return valid;
//     }