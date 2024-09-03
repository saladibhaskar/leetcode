class Solution {
public:
    int digsm(int n)
    {
        int ans=0;
        while(n!=0)
        {
            int m=n%10;
            ans+=m;
            n=n/10;
        }
        return ans;
    }
    int getLucky(string s, int k) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            int asc=s[i]-96;
            ans+=digsm(asc);
        }
        k--;
        while(k!=0)
        {
            ans=digsm(ans);
            k--;
        }
        return ans;
    }
};