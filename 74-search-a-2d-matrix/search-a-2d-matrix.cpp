class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        
        int i,j,c=0;
        for(i = 0 ; i < m.size() ; i++)
        {
            if(i+1<m.size() &&  m[i+1][0]<=t){
            continue;
            }
            for( j = 0 ; j < m[0].size(); j++)
            {
                if(m[i][j]==t){
                    c=1;
                    return true;
                }  
            }
        }
if(c==0)return false;
else return true;
    }
};