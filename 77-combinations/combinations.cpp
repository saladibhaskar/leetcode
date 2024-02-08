class Solution {
public:
    vector<vector<int>>ans;
    void bombit(vector<int>&v,vector<int>&v1,int k,int i=0)
    {
        if(v1.size()==k)
        {
            ans.push_back(v1);
            return;
        }
        if(i>=v.size()) return;
        v1.push_back(v[i]);
        bombit(v,v1,k,i+1);
        v1.pop_back();
        bombit(v,v1,k,i+1);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        vector<int>v1;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }  
        bombit(v,v1,k);
        return ans;
    }
};