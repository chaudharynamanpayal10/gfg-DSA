class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        vector<int>v;
       while(!q.empty()){
           v.push_back(q.front());
           q.pop();
       }
       reverse(v.begin(),v.end());
       for(int i=0; i<v.size(); i++){
           q.push(v[i]);
       }
    }
};