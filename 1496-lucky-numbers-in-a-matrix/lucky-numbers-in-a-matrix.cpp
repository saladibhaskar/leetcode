class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& m) {
        vector<int>v1;
        vector<int>v2;
        int i,j,c=0;
        for(i=0;i<m.size();i++)
        {
            int a=*min_element(m[i].begin(),m[i].end());
            v1.push_back(a);
        }
        int max=0;
        int k=0;
        for(i=0;i<m[0].size();i++)
        {
            max=0;
            for(j=0;j<m.size();j++)
            {
                if(m[j][i]>max)
                {
                    max=m[j][i];
                }
            }
                v2.push_back(max);
                cout<<v2[i]<<" ";
        }
        vector<int>v3;
        for(i=0;i<v1.size();i++)
        {
            for(j=0;j<v2.size();j++)
            {
                if(v1[i]==v2[j])
                {
                    v3.push_back(v1[i]);

                }
            }
        }
        return v3;
    }
};