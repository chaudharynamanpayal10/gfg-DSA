class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        stack<int>s;
        vector<int>v;
        
        
        for (int i = 0; i < arr.size(); i++){
            while(!s.empty() && arr[s.top()]<=arr[i]){
                s.pop();
            }
            if (s.empty()) {
                v.push_back(i + 1);
            }
            else {
                v.push_back(i - s.top());
            }

            s.push(i);
        }
        
        return v;
        
    }
};