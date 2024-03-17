class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& is, vector<int>& ni) {
        int k=0;
        int c=0,ok=0;
       vector<vector<int>>v1;
       int i=0;
       int n=is.size();
       while(i<n and is[i][1]<ni[0]){
        v1.push_back(is[i]);
        i++;
       }
       while(i<n and ni[1]>=is[i][0]){
        ni[0]=min(ni[0],is[i][0]);
        ni[1]=max(ni[1],is[i][1]);
        i++;
       }
       v1.push_back(ni);
       while(i<n){
        v1.push_back(is[i]);
        i++;
       }
      return v1;
    }
};