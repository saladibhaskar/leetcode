class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>v(n);
        iota(v.begin(),v.end(),1);
        int i=0,s=0;
        while(v.size()!=1)
        {
             
            s+=k;
            s-=1;
            s%=v.size();
            v.erase(v.begin()+s);
        }
        return v[0];
    }
};