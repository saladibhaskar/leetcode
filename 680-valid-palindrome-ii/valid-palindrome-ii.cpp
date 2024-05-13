class Solution {
public:
    bool check(string s,int i,int j,int c=0)
    {
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++,j--;
            }else return false;
        }
        return true;

    }
    bool validPalindrome(string s) {
        int  i=0,j=s.size()-1,c=0;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return check(s,i+1,j) || check(s,i,j-1);
            }else
            {
                i++;
                j--;
            }
        }
        return true;
 
    }
};