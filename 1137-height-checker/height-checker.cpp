class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v=heights;
        sort(v.begin(),v.end());
        int c=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=heights[i])c++;
        }
        return c;
    }
};