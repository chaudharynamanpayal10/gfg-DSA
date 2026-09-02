/* Structure of Binary Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        queue<Node*>q;
        vector<int>v;
        
        if(root == NULL){
            return v;
        }
        
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
             v.push_back(q.front()->data);
            while(n--){
                Node* temp = q.front();
                q.pop();
                
                if(temp->left){
                q.push(temp->left);
            }
                if(temp->right){
                q.push(temp->right);
            }
            }
            
        }
        return v;
    }
};