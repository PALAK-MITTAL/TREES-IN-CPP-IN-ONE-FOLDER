/*    question  medium

Given the binary Tree of and two-node values. Check whether the two-node values are cousins of each other or not.


Note: Two nodes of a binary tree are cousins if they have the same depth with different parents.

Example 1:

Input:
      1
    /   \
   2     3
a = 2, b = 3
Output: 0

Example 2:

Input:
       1
     /   \ 
    2     3
   /       \
  5         4 
a = 5, b = 4
Output: 1
Explanation: Here, nodes 5 and 4 are
at the same level and have different
parent nodes. Hence, they both are cousins 

Your Task:
You don't need to read input or print anything. Your task is to complete the function isCousins() that takes the root node of the tree (having all nodes distinct), and two integers 'a' and 'b' as inputs. It returns true if the nodes with given values 'a' and 'b' are Cousins of each other and returns false otherwise. 
Two nodes value are cousins of each other if they are at the same level and have different parents. (The driver code will print 1 if the returned values is true,otherwise 0.)

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1<=Number of Nodes<=1000


Note: The Input/Ouput format and Example given are used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.

*/

/*      solution


bool parent_check(Node *root, int a, int b){
    if(root==NULL) return 0;
    
    if(root->left && root->right){
        
        if(root->left->data==a && root->right->data==b){
            return 1;
        }
        if(root->left->data==b && root->right->data==a){
            return 1;
        }
        
    }
    
    return (parent_check(root->left,a,b) || parent_check(root->right,a,b));
}


// Returns true if the nodes with values 'a' and 'b' are cousins. Else returns false
bool isCousins(Node *root, int a, int b)
{
   //add code here.
   queue<Node*>q;
   q.push(root);
   
   int level=0;
   int l1=-1,l2=-1;
   
   while(!q.empty()){
       
       int n=q.size();
       while(n--){
           
           Node*temp=q.front();
           q.pop();
           if(temp->data==a) {
           l1=level;
          }
          if(temp->data==b) {
           l2=level;
         }
          if(temp->left){
              q.push(temp->left);
          }
          if(temp->right){
              q.push(temp->right);
          }
     } 
       
       level++;
       
       if(l1 != l2){
           return 0;
       }
       if(l1 !=-1){
           break;
       }
       
   }
   
   return (!parent_check(root,  a,  b));
}


*/