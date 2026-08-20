/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> levelOrder(Node *root) {
        // code here
        vector<int>ans;
        queue<Node*>q;
        
        if(root==NULL){
            return ans;
        }
        q.push(root);
        
        while(!q.empty()){
            Node* temp= q.front();
            q.pop();
            
            ans.push_back(temp->data);
            
            if(temp->left!= NULL){
                q.push(temp->left);
            }
            if(temp->right!= NULL){
                q.push(temp->right);
            }
        }
        return ans;
    }
};