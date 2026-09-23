/* Binary Tree Node Structure
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
                while(root){

                    //Left part doesnot exist...

                    if(!root->left){
                        ans.push_back(root->data);
                        root=root->right;
                    }

                    //left part exist...

                    else{
                        Node* curr = root->left;

                        while(curr->right && curr->right!=root){
                            curr=curr->right;
                        }

                            //left Subtree not traverse...

                            if(curr->right==NULL){
                                ans.push_back(root->data);
                                curr->right=root;
                                root=root->left;
                            }

                            //already traverse...

                            else{
                                curr->right=NULL;
                                root=root->right;
                            }
                    }
                }

                return ans;
        
    }
};