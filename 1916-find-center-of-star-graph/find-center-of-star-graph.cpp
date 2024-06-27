class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>mp;
        for(int i=0;i<edges.size();i++)
        {
            for( int j=0;j<edges[0].size();j++)
            {
                mp[edges[i][j]]+=1;
            }
        }
        int mx=INT_MIN,e=0;
        for(auto it: mp)
        {
            if(it.second>mx)
            {
                mx=it.second;
                e=it.first;
            }
        }
        return e;

    }
};