class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        // code here
        stack<int>s;
        vector<int>v;
        
        for(int i=2*arr.size()-1; i>=0; i--){
            int idx = i%arr.size();
            if(s.empty()){
                v.push_back(-1);
            }
            else if(!s.empty() && s.top()>arr[idx]){
                v.push_back(s.top());
            }
            else if(!s.empty() && s.top()<=arr[idx]){
                while(!s.empty() && s.top()<=arr[idx]){
                 s.pop();
                }
                    if(s.empty()){
                    v.push_back(-1);
                }
                else{
                    v.push_back(s.top());
                }
            }
            s.push(arr[idx]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};