class Solution {
public:
    bool hasAllChars(vector<int>& freq) {
        // Check if we have at least one of each character
        return freq[0] > 0 && freq[1] > 0 && freq[2] > 0;
    }
    int numberOfSubstrings(string s) {
        int start=0,end=0,ans=0;
        vector<int>v(3,0);
        while(end<s.size())
        {
            char cur=s[end];
            v[cur-'a']+=1;

            while(hasAllChars(v))
            {
                ans+=s.size()-end;

                char leftmost=s[start];
                v[leftmost-'a']-=1;
                start+=1;
            }
            end+=1;

        }
        return ans;
    }
};