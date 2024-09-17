class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp;
        stringstream ss(s1);
        string word;
        while(ss >> word)
        {
            mp[word]+=1;
        }
        stringstream sss(s2);
        while(sss>>word)
        {
            mp[word]+=1;
        }
        vector<string>ans;
        for( auto it:mp)
        {
            if(it.second==1)ans.push_back(it.first);
        }
        return ans;
    }
};