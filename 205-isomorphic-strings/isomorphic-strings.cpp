class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int>mp1,mp2;
        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]]+=1;
            mp2[t[i]]+=1;
        }
        for(int i=0;i<s.size();i++)
        {
            if(mp1[s[i]]==mp2[t[i]]){
                if((s[i]==s[i+1] && t[i]!=t[i+1])||(s[i]!=s[i+1] && t[i]==t[i+1]))return false;
            }else return false;
        }
        return true;
    }
};