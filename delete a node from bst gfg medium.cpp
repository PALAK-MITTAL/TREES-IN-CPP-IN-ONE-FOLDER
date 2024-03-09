/*    question->medium level->gfg

Given a Binary Search Tree and a node value X. Delete the node with the given value X from the BST. If no node with value x exists, then do not make any change. 

*/

/*           approach

  CASE1:  leaf node
   agar leaf node hai then delete kar do node ko aur return NULL kar do

  CASE2: single child exists
  agar hame aisi node ko delete karna hai jiska ya toh keval ek right exist karta hai ya phir ek left then ham use delete toh karenge lekin uske child ko return kara denge uske upar wale node me

  CASE3: both child exists
      ===>>>  tab ham us wale node ki jagah ya toh left me beow approach use kare ya phir right me aise hi iss approach ko use kare i am using now left side's

      >>find greatest element in left(child)
      >> parent ke right ko bolo ki child ke left ko point karo
         lekin agar(given deleted node==parent)then
                  if(parent==root){
                    child->right=root->right;
                    delete root;
                    return child;
                  }
                  else{           
                    >> child->left= root->left
                    >>child->right= root->right
                    >>delete root
                    >>return child
     }

*/

/*      SOLUTION


Node *deleteNode(Node *root, int X) {
    
    // your code goes here
    if(!root){
        return NULL;
    }
    
    if(root->data > X){
        root->left=deleteNode(root->left,X);
        return root;
    }
    else if(root->data < X){
        root->right=deleteNode(root->right,X);
        return root;
    }
    else //(means root's data==X)
    {
        
        // leaf node delete karni ho
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }
        // aisi node delete karni ho jiska keval ek child exists karta hai
        else if(!root->right) // left child exist
        {
            Node* temp= root->left;
            delete root;
            return temp;
        }
        else if(!root->left) // right child exist
        {
            Node* temp= root->right;
            delete root;
            return temp;
        }
        //aisi node delete karni ho jiske dono child exists karte hai
        else{
            
          //  // find greatest element from left
                Node* child=root->left;
                Node*parent=root;
                //jab tak child ke right mein hame null nahi mil jata
                while(child->right){
                    parent=child;
                    child=child->right;
                }
        // ab ham check karenge ki parent and root are same or not
            if(parent!=root){
                parent->right=child->left;
                child->left=root->left;
                child->right=root->right;
                delete root;
                return child; 
            }
            else{
                child->right=root->right;
                delete root;
                return child;
            }
        }
        
    }

    
}

time complexity =O(n)








*/