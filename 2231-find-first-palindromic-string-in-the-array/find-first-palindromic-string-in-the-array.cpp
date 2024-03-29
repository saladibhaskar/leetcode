class Solution {
public:
    bool pal(string &s)
    {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j]) return false;
            ++i;
            --j;
        }
        return true;
    }
    string firstPalindrome(vector<string>&a) {
        int i=0;
        for(auto it:a)
        {
           if(pal(it))
            {
                return it;
            }
        }
        return "";
    }
};