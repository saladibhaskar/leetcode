class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>ans;
        vector<int>row;
        if(n*m==original.size())
        {
        for( int i=0 ;i<original.size();i++)
        {
            row.push_back(original[i]);
            if(row.size()==n)
            {
                ans.push_back(row);
                row.clear();
            }
        }
        }else
        {
            return {};
        }
        return ans;
    }
};