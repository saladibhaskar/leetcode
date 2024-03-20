class Solution {
public:
    int countPrimes(int n) {
        if(n==0)return 0;
        vector<int>v(n+1,true);
        v[0]=false;
        v[1]=false;

        for(int i=0;i<n;i++)
        {
            if(v[i])
            {
                for(int j=i+i;j<n;j+=i)
                {
                   v[j]=false;
                }
            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(v[i])c++;
        }
        return c;
    }
};