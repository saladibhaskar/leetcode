class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& a) {
    map<int,vector<int>>mp;
    int i;
    vector<vector<int>>v;
    for(i = 0; i < a.size() ; i++)
    {
        mp[a[i]].push_back(i);
    }
    for(auto it : mp )
    {
        cout<<it.second.size()<<" ";
        vector<int>bt;
        for(int i :it.second)
        {
            if(it.first>bt.size()) {
                bt.push_back(i);
            }
            if(bt.size()==it.first)
            {
                v.push_back(bt);
                bt.clear();
            }
        }
        bt.clear();
    }
    return v;
    }
};