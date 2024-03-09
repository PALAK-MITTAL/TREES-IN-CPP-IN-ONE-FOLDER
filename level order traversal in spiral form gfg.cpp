/*         question

Given a binary tree and the task is to find the spiral order traversal of the tree.

Spiral order Traversal mean: Starting from level 0 for root node, for all the even levels we print the node's value from right to left and for all the odd levels we print the node's value from left to right. 

For below tree, function should return 1, 2, 3, 4, 5, 6, 7.


 
 

Example 1:

Input:
      1
    /   \
   3     2
Output:1 3 2

Example 2:

Input:
           10
         /     \
        20     30
      /    \
    40     60
Output: 10 20 30 60 40 
Your Task:
The task is to complete the function findSpiral() which takes root node as input parameter and returns the elements in spiral form of level order traversal as a list. The newline is automatically appended by the driver code.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= Number of nodes <= 105
0 <= Data of a node <= 105

*/

/*         solution


vector<int> findSpiral(Node *root)
{
    //Your code here
    
    vector<int>ans;
    stack<Node*>s1;    // R TO L
    stack<Node*>s2;    //L TO R
    
    s1.push(root);
    
    while(!s1.empty() || !s2.empty()){
        
      if(!s1.empty()){
         while(!s1.empty()){
             Node* temp=s1.top();
             s1.pop();
             ans.push_back(temp->data);
             if(temp->right){
                 s2.push(temp->right);
             }
             if(temp->left){
                 s2.push(temp->left);
             }
         } 
      }
    
      else{
          while(!s2.empty()){
             Node* temp=s2.top();
             s2.pop();
             ans.push_back(temp->data);
             if(temp->left){
                 s1.push(temp->left);
             }
             if(temp->right){
                 s1.push(temp->right);
             }
         }  
      }
    
    }
    
    return ans;
    
}






*/