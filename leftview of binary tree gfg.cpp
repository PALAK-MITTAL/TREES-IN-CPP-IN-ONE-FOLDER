/*             question

Given a Binary Tree, return Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to complete the function leftView(), which accepts root of the tree as argument. If no left view is possible, return an empty tree.

Left view of following tree is 1 2 4 8.

          1
       /     \
     2        3
   /     \    /    \
  4     5   6    7
   \
     8   

Example 1:

Input:
   1
 /  \
3    2
Output: 1 3

Example 2:

Input:

Output: 10 20 40
Your Task:
You just have to complete the function leftView() that returns an array containing the nodes that are in the left view. The newline is automatically appended by the driver code.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
0 <= Number of nodes <= 100
0 <= Data of a node <= 1000

*/

/*     solution1      queue


vector<int> leftView(Node *root)
{
   vector<int>ans;

   if(root==NULL) return ans;

   queue<Node*>q;
   q.push(root);
   
   while(!q.empty()){
       int n=q.size();
        ans.push_back(q.front()->data);
       while(n--){
           Node*temp=q.front();
           q.pop();
           if(temp->left){
               q.push(temp->left);
           }
           if(temp->right){
               q.push(temp->right);
           }
       }
   }
   
   return ans;
}


*/

/*             solution2       recursion



void lview(Node*root, int level, vector<int>&ans){
    if(!root) return;
    if(level==ans.size()) ans.push_back(root->data);
    lview(root->left,level+1,ans);
    lview(root->right,level+1,ans);
   
}

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   vector<int>ans;
   
   if(root==NULL) return ans;
   
   lview(root,0,ans);
   
   return ans;
}





*/