class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string ,int>mp;
        int i=0;
        string str="";
        while(i<s1.size())
        {
            if(s1[i]==' ')mp[str]+=1,str="";
            else str+=s1[i];
            i++;
        }
        mp[str]+=1;
        i=0;
        str="";
        while(i<s2.size())
        {
            if(s2[i]==' ')mp[str]+=1,str="";
            else str+=s2[i];
            i++;
        }
        mp[str]+=1;
        vector<string>ans;
        for( auto it:mp)
        {
            if(it.second==1)ans.push_back(it.first);
        }
        return ans;

    }
};