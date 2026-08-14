class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        if (k > q.size() || k <= 0)
        return q;
        vector<int>v;
        while(!q.empty()){
            v.push_back(q.front());
            q.pop();
        }
        reverse(v.begin(),v.begin()+k);
        for(int i=0; i<v.size(); i++){
            q.push(v[i]);
        }
        return q;
    }
};