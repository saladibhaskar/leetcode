class Solution {
public:
    string customSortString(string o, string s) {
        unordered_map<char,int>mp2;
        int i;
        string ans="";
        for(i=0;i<s.size();i++)
        {
            mp2[s[i]]+=1;
        }
        for(i=0;i<o.size();i++)
        {  
            if(mp2.find(o[i])!=mp2.end())
            {
              string d=string(mp2[o[i]],o[i]);
              ans+=d;
              mp2.erase(o[i]);
            }
        }
        for(auto it:mp2)
        {
            string d=string(it.second,it.first);
            ans+=d;
        }
        return ans;
    }
};