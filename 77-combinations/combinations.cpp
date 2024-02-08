class Solution {
public:
    vector<vector<int>>ans;
    void bombit(vector<int>&v,vector<int>&v1,int k,int i=0,int sm=0)
    {
        if(v1.size()==k)
        {
            ans.push_back(v1);
            return;
        }
        if(i>=v.size()) return;
        v1.push_back(v[i]);
        bombit(v,v1,k,i+1,sm+v[i]);
        v1.pop_back();
        bombit(v,v1,k,i+1,sm);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        vector<int>v1;
        vector<vector<int>>as;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }  
        bombit(v,v1,k);
        return ans;
    }
};