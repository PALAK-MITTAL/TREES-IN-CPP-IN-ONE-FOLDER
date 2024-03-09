


/*  solution1


void sum(Node*root, int& SUMMASION){
    if(root==NULL) return;
     SUMMASION+=root->key;
     sum(root->left, SUMMASION);
     sum(root->right, SUMMASION);
}

// Function should return the sum of all the elements
// of the binary tree
long int sumBT(Node* root)
{
    // Code here
    int SUMMASION=0;
    sum(root, SUMMASION);
    return  SUMMASION;
    
}

*/


/*  solution2

long int sumBT(Node* root)
{
    // Code here
    if(root==NULL) return 0;
    return ((root->key) + sumBT(root->left) + sumBT(root->right));
    
}


*/