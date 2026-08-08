class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        stack<int>s;
        vector<int>v;
        
        for(int i=0; i<arr.size(); i++){
             while(!s.empty() && s.top()>=arr[i]){
                 s.pop();
                }
                    if(s.empty()){
                    v.push_back(-1);
                }
                else{
                    v.push_back(s.top());
                }
            s.push(arr[i]);
        }
        return v;
        }
};