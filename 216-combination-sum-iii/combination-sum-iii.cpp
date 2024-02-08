class Solution {
public:
vector<vector<int>>ans;
    void bombit(vector<int>&v,vector<int>&v1,int k,int n,int i=0,int sm=0)
    {
        if(sm>n)return;
        if(v1.size()>=k)
        {
            if(sm==n && v1.size()==k)
            {
            ans.push_back(v1);
            return;
            }
            else
            {
                return;
            }
        }
        if(i>=v.size()) return;
        v1.push_back(v[i]);
        bombit(v,v1,k,n,i+1,sm+v[i]);
        v1.pop_back();
        bombit(v,v1,k,n,i+1,sm);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;
        vector<int>v1;
        for(int i=1;i<=9;i++)
        {
            v.push_back(i);
        }  
        bombit(v,v1,k,n);
        return ans;

        
    }
};