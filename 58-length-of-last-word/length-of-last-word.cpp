class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int a=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')a=1;
            if(s[i]!=' ' && a==1){
             c++;
            }
            else if(s[i]==' ' && a==1)return c;
        }
        return c;
    }
};