/* Tree Node Structure
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
    int sumBT(Node* root) {
        // code here
        int count =0;
        queue<Node*>q;

        if(root == NULL){
            return 0;
        }
        q.push(root);

        while(!q.empty()){
            int n=q.size();
            for(int i=0; i<n; i++){
            Node* temp = q.front();
            q.pop();
            count=count+temp->data;

            if(temp->left!=NULL){
                q.push(temp->left);
            }

            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
        }
        return count;
        
    }
};