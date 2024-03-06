class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& a) {
        if(a.size()<3)return false;
        for(int i=0;i<a.size()-2;i++)
        {
            if(a[i]%2!=0)
            {
                if(a[i+1]%2!=0 && a[i+1]%2!=0 && a[i+2]%2!=0 )return true;
            }
        }
        return false;
    }
};