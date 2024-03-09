/*


 vector<int> preOrder(Node* root)
    {
        
        vector<int>ans;
        if(!root){
            return ans;
        }
        stack<Node*>st;
        st.push(root);
        while(!st.empty()){
            Node* temp=st.top();
            ans.push_back(temp->data);
            st.pop();
            if(temp->right){
                st.push(temp->right);
            }
            if(temp->left){
                st.push(temp->left);
            }
            
        }
       return ans; 
    }






*/