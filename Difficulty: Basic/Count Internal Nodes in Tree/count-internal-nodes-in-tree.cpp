/* Binary Tree Node Structure
class Node {
    public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        // Code here
        int count =0;
        queue<Node*>q;

        if(root == NULL){
            return 0;
        }
        q.push(root);
        if(root->left == NULL && root->right == NULL){
            return 0;
        }

        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            
            if(temp->left != NULL || temp->right != NULL) {
                count++;
            }

            if(temp->left!=NULL){
                    // Check if left child is a leaf
                    q.push(temp->left);
            }


            if(temp->right!=NULL){
                    // Check if left child is a leaf
                       q.push(temp->right);
            }
        }

        return count;

    }
};