class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        stack<int>s;
        
        for(int i=0; i<arr.size(); i++){
            s.push(arr[i]);
        }
        int i=0;
        
        while(!s.empty()){
            arr[i]=s.top();
            i++;
            s.pop();
        }
    }
};