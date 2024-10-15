class Solution {
public:
    long long minimumSteps(string s) {
        long long i=0,j=1,c=0;
        long long n=s.size();
        long long zero=0,one=0;
        for( int i=n-1;i>=0;i--)
        {
            if(s[i]=='0')zero++;
            else c+=zero;
        }
        return c;

        
    }
};