class Solution {
public:
    int pivotInteger(int n) {
        int sum=n*(n+1)/2;
        for(int i=1;i<=n;i++)
        {
            int s=i*(i+1)/2;  
            if(sum-s+i==s)
            {
                return i;
            }
        }
        return -1;
    }
};