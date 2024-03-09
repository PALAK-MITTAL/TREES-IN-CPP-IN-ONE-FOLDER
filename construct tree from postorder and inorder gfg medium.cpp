/*


int find(int*inord,int target,int start,int end){
        for(int i=start;i<=end;i++){
            if(target==inord[i]){
                return i;
            }
        }
        return -1;
    }

 Node* Tree(int in[],int post[],int inordStart,int inordEnd,int index)
    {
        if(inordStart>inordEnd)  { return NULL;}
        Node* root=new Node(post[index]);
        int pos=find(in,post[index],inordStart,inordEnd);
        
        root->right= Tree(in,post,pos+1,inordEnd,index-1);
        root->left= Tree(in,post,inordStart,pos-1,index-(inordEnd-pos)-1);
        
        return root;
    }

//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    
    
     return Tree(in,post,0,n-1,n-1);
    
}






*/