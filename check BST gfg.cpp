/*       ///////////////////      solution1      ////////////////////////

void inorder(Node*root,vector<int>&ans)
    {
        if(!root) return;
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    
    bool isBST(Node* root) 
    {
        // Your code here
        vector<int>ans;
        inorder(root,ans);
        
        for(int i=1;i<ans.size();i++){
            if(ans[i]<=ans[i-1]){
                return 0;
            }
        }
        
        return 1;
        
        //approach ye hai ki agar inorder of bst ascending order me hai then it is bst else not and duplicates not allowed
    }

*/

/*       ////////////      solution2         ////////////////////

bool BST(Node*root,int&prev)
    {
        if(!root) return 1;
        
        int l=BST(root->left,prev);
        if(l==0) return 0;
        
        if(root->data<=prev){
            return 0;
        }
        
        prev=root->data;
        return BST(root->right,prev);
    }
    
    bool isBST(Node* root) 
    {
        // Your code here
        int prev=INT_MIN;
       return BST(root,prev);
       
        //approach ye hai ki agar inorder of bst ascending order me hai then it is bst else not and duplicates not allowed
    }



*/