class Solution {
public:
    void comb(vector<int>&v ,vector<int >&v1,vector<vector<int>>&ans,int t,int i,int sm=0)
    {
        if(sm==t)
        {
            ans.push_back(v1);
            return;
        }
        if(i>=v.size()|| sm>t) return;
        sm+=v[i];
        v1.push_back(v[i]);
        comb(v,v1,ans,t,i,sm);
        sm-=v[i];
        v1.pop_back();
        comb(v,v1,ans,t,i+1,sm);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v1;
        comb(candidates,v1,ans,target,0);
        return ans;

    }
};