class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        stack<int>s;
        
        for(int i = mat.size()-1; i>=0; i--){
            s.push(i);
        }
        
        while(s.size()>1){
            int first = s.top();
            s.pop();
            int second = s.top();
            s.pop();
            
            if (mat[first][second] == 1) {
                // first knows second
                // so first cannot be celebrity
                s.push(second);
            }
            else {
                // first doesn't know second
                // so second cannot be celebrity
                s.push(first);
            }
        }
        if(s.empty()){
            return -1;
        }
        int num = s.top();
        int row=0,col=0;
        
        for(int i=0; i<mat.size(); i++){
            row += mat[num][i];
            col += mat[i][num];
        }
        
        if(row ==1 && col == mat.size()){
            return num;
        }
        
        return -1;
    }
};