class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
         long long a[n],b[n];
         long long i=0,j=0;
         long long ma=0;
         
         for(i=0;i<n;i++)
         {
             if(h[i]>ma)
             {
                 ma=h[i];
             }
             a[i]=ma;
         }
         ma=0;
         for(i=n-1;i>=0;i--)
         {
             if(h[i]>ma)
             {
                 ma=h[i];
             }
             b[i]=ma;
        }
        long int s=0;
        for(i=0;i<n;i++)
        {
             s+=min(a[i],b[i])-h[i];
        }
        return s;
        
    }
};