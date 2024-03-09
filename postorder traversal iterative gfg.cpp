/*


vector<int> postOrder(Node* root) {
       
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
            
            if(temp->left){
                st.push(temp->left);
            }
            if(temp->right){
                st.push(temp->right);
            }
        }
       
       reverse(ans.begin(),ans.end());
       
       return ans;
    }

//     approach
// postorder hota hai LEFT RIGHT NODE
//  toh isko implement karne ke liye ham NODE RIGHT LEFT ke order me implement karenge phir ans ko reverse kar denge



*/