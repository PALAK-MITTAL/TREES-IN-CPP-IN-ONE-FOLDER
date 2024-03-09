/*


int find(int*inord,int target,int start,int end){
        for(int i=start;i<=end;i++){
            if(target==inord[i]){
                return i;
            }
        }
        return -1;
    }
    
    Node* Tree(int in[],int pre[],int inordStart,int inordEnd,int index)
    {
        if(inordStart>inordEnd)  { return NULL;}
        Node* root=new Node(pre[index]);
        int pos=find(in,pre[index],inordStart,inordEnd);
        root->left= Tree(in,pre,inordStart,pos-1,index+1);
        root->right= Tree(in,pre,pos+1,inordEnd,index+(pos-inordStart)+1);
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        
        return Tree(in,pre,0,n-1,0);
        
       
    }
};






*/