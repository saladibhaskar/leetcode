class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        unordered_map<int,int>mp;
        unordered_map<int,int>mp2;
       // for(int i=0;i<t.size();i++) mp2[t[i][0]]+=1;
        for(int i=0;i<t.size();i++)
        {
            mp[t[i][1]]+=1;
           // mp2.erase(t[i][0]);
           mp2[t[i][0]]+=1;
        }
        int c=0,i;
        //if(mp2.size()==0)return -1;
        //else return mp2.begin()->first;
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