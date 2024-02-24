class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        for(int i=0;i<m.size();i++)
        {
            for(int j=i+1;j<m[i].size();j++)
            {
                swap(m[i][j],m[j][i]);
            }
            reverse(m[i].begin(),m[i].end());
        }
    }
};