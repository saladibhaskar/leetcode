class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        map<int,int>mp;
        map<int,int>mp2;
        for(int i=0;i<t.size();i++)
        {
            mp[t[i][1]]+=1;
            mp2[t[i][0]]+=1;
            //cout<<t[i][0]<<" "<<t[i][1]<<" ";
        }
        int c=0,i;
        for( i=1;i<=n;i++)
        {
            if(mp[i]==n-1 && mp2.find(i)==mp2.end())
            {
                c=1;
                return i;
            }
        }
        if(c==0) return -1;
        return i;
    }
};