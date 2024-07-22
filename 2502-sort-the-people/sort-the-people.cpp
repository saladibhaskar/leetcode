class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string,greater<int>>mp;
        for(int i=0;i<names.size();i++)
        {
            mp[heights[i]]=names[i];
        }
        names.clear();
        for(auto it: mp)
        {
             names.push_back(it.second);
        }
        return names;
    }
};