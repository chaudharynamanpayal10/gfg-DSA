class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        stack<int>s;
        vector<int>v;
        for(int i=arr.size()-1; i>=0; i--){
         
                while(!s.empty() && s.top()<=arr[i]){
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
        reverse(v.begin(),v.end());
        return v;
    }
};