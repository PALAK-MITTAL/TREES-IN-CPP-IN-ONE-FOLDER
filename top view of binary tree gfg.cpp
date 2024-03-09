/*                solution 1  level order traversal


void find(Node*root, int &l,int &r,int pos){
        if(!root) {
            return;
        }
        
        l=min(l,pos);
        r=max(r,pos);
        find(root->left,l,r,pos-1);
        find(root->right,l,r,pos+1);
    }
    
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        // step1: finding position of leftmost and rightmost element in the tree
       int l=0,r=0,pos=0;
       find(root,l,r,pos);
        
       //step2: for returning we make ans vector and to get know about that we have visited that node we make a bool vector both of them have size as (r-l+1
       vector<int>ans(r-l+1);
       vector<bool>filled(r-l+1,0);
        
        //step3: starting level order traversal
        queue<Node*>q;
        queue<int>index;
        
        q.push(root);
        index.push(-1*l);
        
        while(!q.empty()){
            Node* temp=q.front();
            q.pop();
            int index_pos=index.front();
            index.pop();
            
            if(!filled[index_pos]){
                filled[index_pos]=1;
                ans[index_pos]=temp->data;
            }
            //left
            if(temp->left){
                q.push(temp->left);
                index.push(index_pos-1);
            }
            //right
             if(temp->right){
                q.push(temp->right);
                index.push(index_pos+1);
            }
            
        }
        
      return ans;    
    }


*/

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//

/*                 solution2  recursion



 void find(Node*root, int &l,int &r,int pos){
        if(!root) {
            return;
        }
        
        l=min(l,pos);
        r=max(r,pos);
        find(root->left,l,r,pos-1);
        find(root->right,l,r,pos+1);
    }
    
    void Tview(Node*root,int pos,vector<int>&ans,vector<int>&level,int lev)
    {
        if(!root) {
            return;
        }
        
        if(level[pos]>lev){
            ans[pos]=root->data;
            level[pos]=lev;
        }
        
        //left
        Tview(root->left,pos-1,ans,level,lev+1);
        //right
         Tview(root->right,pos+1,ans,level,lev+1);
        
    }
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        // step1: finding position of leftmost and rightmost element in the tree
       int l=0,r=0,pos=0;
       find(root,l,r,pos);

       vector<int>ans(r-l+1);
       vector<int>level(r-l+1,INT_MAX);// isme andar wahi values jayengi jo kam  hogi level ki int max se
        
       Tview(root,-1*l,ans,level,0);
      
      return ans;    
    }



*/