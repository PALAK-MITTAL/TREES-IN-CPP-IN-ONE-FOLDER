/*

 vector<int> inOrder(Node* root)
    {
        vector<int>ans;
        if(!root){
            return ans;
        }
        
        stack<Node*>st;
        stack<bool>visited;
        st.push(root);
        visited.push(0);
        
        while(!st.empty()){
            
            Node*temp=st.top();
            st.pop();
            bool flag=visited.top();
            visited.pop();
            
            if(flag==0){
                if(temp->right){
                    st.push(temp->right);
                    visited.push(0);
                }
                st.push(temp);
                visited.push(1);
                if(temp->left){
                    st.push(temp->left);
                    visited.push(0);
                }
            }
            
            if(flag==1){
                ans.push_back(temp->data);
            }
            
        }
        
        return ans;
    }


*/