// leetcode->medium question 102
/* question at leetcode

Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []
 

*/
/*          solution at leetcode


 vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>> result;
        if(!root) return result;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            vector<int> temp;
            for(int i=0;i<sz;i++){
                auto it=q.front();
                q.pop();
                temp.push_back(it->val);
                if(it->left) q.push(it->left);
                if(it->right) q.push(it->right);                
            }
        result.push_back(temp);
        }
    return result; 
    }

*/







// gfg->easy
/*            question at gfg 

Given a root of a binary tree with n nodes, find its level order traversal.
Level order traversal of a tree is breadth-first traversal for the tree.

Example 1:

Input:
    1
  /   \ 
 3     2
Output:
1 3 2

*/

/*            solution at gfg

 vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int>ans;
      queue<Node*>q;
      Node*temp;
      q.push(root);
      while(!q.empty()){
          temp=q.front();
          q.pop();
          ans.push_back(temp->data);
          if(temp->left) q.push(temp->left);
          if(temp->right) q.push(temp->right);
      }
      return ans;
    }

*/

