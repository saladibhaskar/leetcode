class Solution {
public:
    bool pal(string &s)
    {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>&a) {
        int i=0;
        for( i=0;i<a.size();i++)
        {
           if(pal(a[i]))
            {
                return a[i];
                break;
            }
        }
        return "";
    }
};