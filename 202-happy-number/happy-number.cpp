class Solution {
public:
int sumof(int n)
{
    if(n<=9) return n*n;
   return (n%10)*(n%10) + sumof(n/10);
}
    bool isHappy(int n) {
        int c=0;
        while(n!=1 && n!=7)
        {
            n=sumof(n);
            cout<<n<<" ";
            if(n==1 ||n==7)return true;
            if(n<=9)
            {
                return false;
            }
        }
        return true;
    }
};