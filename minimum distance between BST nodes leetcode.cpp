/*        question 783 leetcode


Given the root of a Binary Search Tree (BST), return the minimum difference between the values of any two different nodes in the tree.

Example 1:
Input: root = [4,2,6,1,3]
Output: 1

Example 2:
Input: root = [1,0,48,null,null,12,49]
Output: 1
 
Constraints:
The number of nodes in the tree is in the range [2, 100].
0 <= Node.val <= 105


*/


/*            solution

 void minDist(TreeNode* root,int&prev,int&ans)
    {
             if(!root) return;
              minDist(root->left,prev,ans);
              if(prev!=INT_MIN){
                  ans=min(ans,root->val - prev);
              }
              prev=root->val;
              minDist(root->right,prev,ans);
    }

    int minDiffInBST(TreeNode* root) {
        int prev=INT_MIN;
        int ans=INT_MAX;
        minDist(root,prev,ans);
        return ans;
    }


*/