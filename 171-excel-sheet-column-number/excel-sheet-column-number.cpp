class Solution {
public:
    int titleToNumber(string s) {
        int j=0;
        int c=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            c+=pow(26,j)*(int(s[i])-64);
            j++;
        }
        return c;
    }
};