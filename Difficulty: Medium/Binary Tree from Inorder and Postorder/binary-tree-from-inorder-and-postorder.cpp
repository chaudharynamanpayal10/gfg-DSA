/* Structure of binary tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int x) {
        data = x;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    int fin(vector<int>& inorder, int target,int start,int end){
            for(int i=start; i<=end; i++){
                if(inorder[i]==target){
                    return i;
                }
            }
            return -1;
        }
        Node *Tree(vector<int>& inorder, vector<int>& postorder,int InStart,int InEnd,int index){
             if(InStart>InEnd){
                return NULL;
            }
            Node *root = new Node(postorder[index]);
            int pos = fin(inorder,postorder[index],InStart,InEnd);
            root->right = Tree(inorder,postorder,pos+1,InEnd,index-1);
            root->left = Tree(inorder,postorder,InStart,pos-1,index-(InEnd-pos)-1);
            return root;
        }
   
    Node *buildTree(vector<int> &inorder, vector<int> &postorder) {
        // code here
        int n = inorder.size();
        return Tree(inorder,postorder,0,n-1,n-1);
        
    }
};