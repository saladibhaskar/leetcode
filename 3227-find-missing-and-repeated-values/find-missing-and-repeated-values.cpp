class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>mp;
        int sm=0,rp=0;
        for(auto it:grid)
        {
            for( auto j:it)
            {
                mp[j]+=1;
                if(mp[j]==2)
                {
                    rp=j;
                }
                sm+=j;
            }
        }
        sm-=rp;
        int s=grid.size();
        s*=s;
        s=s*(s+1)/2;
        int ms=s-sm;
        return {rp,ms};

    }
};