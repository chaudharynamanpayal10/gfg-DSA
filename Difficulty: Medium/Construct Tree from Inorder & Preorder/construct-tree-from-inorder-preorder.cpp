/* Structure of a Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
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
    Node *Tree(vector<int>& inorder, vector<int>& preorder,int InStart,int InEnd,int index){
         if(InStart>InEnd){
            return NULL;
        }
        Node *root = new Node(preorder[index]);
        int pos = fin(inorder,preorder[index],InStart,InEnd);
        root->left = Tree(inorder,preorder,InStart,pos-1,index+1);
        root->right = Tree(inorder,preorder,pos+1,InEnd,index+(pos-InStart)+1);
        return root;
    }
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // code here
         int n = inorder.size();
       return Tree(inorder,preorder,0,n-1,0);
    }
};