class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>mp;
        for(int i=0;i<edges.size();i++)
        {
                mp[edges[i][0]]+=1;
                mp[edges[i][1]]+=1;
        }
        int mx=INT_MIN,e=0;
        for(auto it: mp)
        {
            if(it.second==edges.size())return it.first;
        }
        return e;

    }
};