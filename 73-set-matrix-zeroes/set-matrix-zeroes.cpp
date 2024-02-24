class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>iind(matrix.size(),1);
        vector<int>jind(matrix[0].size(),1);
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    iind[i]=0;
                    jind[j]=0;
                }
            }
        }
        //System.out.println(arr);
        
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (iind[i]==0 || jind[j]==0) {
                    matrix[i][j] = 0;
                    // System.out.println(k);
                }
            }
    }
    }
};