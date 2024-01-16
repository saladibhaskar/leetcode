 class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& v) {
        int n=v.size();
        map<int,int>d1;
        map<int,int>d2;
        vector<vector<int>>ans;
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<n;i++){
            d1[v[i][0]]++;
        }
        for(int i=0;i<n;i++){
            d2[v[i][1]]++;
        }
        
        for(auto it:d1){
            if(it.second>=1 and d2[it.first]==0){
                v1.push_back(it.first);
            }
        }
        for(auto it:d2){
            if(it.second==1){
                v2.push_back(it.first);
            }
        }
        ans.push_back(v1);
        ans.push_back(v2);
        return ans;
    }
};
