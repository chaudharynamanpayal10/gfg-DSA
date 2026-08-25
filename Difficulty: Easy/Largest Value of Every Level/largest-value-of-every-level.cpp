/* Binary Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    vector<int> largestValues(Node* root) {
        // code here
        vector<int>v;
        queue<Node*>q;
        
        if(root == NULL){
            return v;
        }
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            int maxi = INT_MIN;
            for(int i=0; i<n; i++){
                Node* temp = q.front();
                q.pop();
                
                maxi = max(maxi, temp->data);
                
                if(temp->left){
                    q.push(temp->left);
                }
                
                if(temp->right){
                    q.push(temp->right);
                }
            }
             v.push_back(maxi);
        }
        return v;
    }
};