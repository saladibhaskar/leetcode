class Solution {
public:
    int reverse(int n) {
        long long  rev=0,rem;
        while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        if(  rev>=-pow(2,31) && rev<=pow(2,31)-1)
        {
            return rev;
        }else
        {
            return 0;
        }
        
    }
};