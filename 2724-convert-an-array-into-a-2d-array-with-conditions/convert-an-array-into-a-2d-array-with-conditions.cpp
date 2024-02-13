class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& a) {
        unordered_map<int,int>mp;
        int i;
        for(i = 0;i <a.size();i++)
        {
            mp[a[i]]+=1;
        }
        vector<vector<int>>v;
        int mx=0,ele=0;
        for(auto it : mp){
            if(it.second > mx){
                mx = it.second;
                ele = it.first;
            }
        }
        for(i=1;i<=mx;i++)
        {
            v.push_back({ele});
        }
        mp.erase(ele);
        for(auto it : mp)
        {
            for(int i=0;i<it.second;i++)
            {
            v[i].push_back(it.first);
            }
        }
        return v;
        
    }
};