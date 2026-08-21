/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        int count =0;
        queue<Node*>q;
        
        if(root == NULL){
            return 0;
        }
        q.push(root);
        if(root->left == NULL && root->right == NULL){
            return 1;
        }
        
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            
            if(temp->left!=NULL){
                    // Check if left child is a leaf
                    q.push(temp->left);
                    if (temp->left->left == NULL && temp->left->right == NULL) {
                        
                        count ++;
                    }
            }
            
              
            if(temp->right!=NULL){
                    // Check if left child is a leaf
                       q.push(temp->right);
                    if (temp->right->left == NULL && temp->right->right == NULL) {
                     
                        count ++;
                    }
            }
        }
        
        return count;
        
    }
};