class Solution {
public:
    bool judgeSquareSum(int c) {
        int i=1;
        if(c==0)return true;
        for(i=0;i<=sqrt(c);i++)
        {
            
            if(int(sqrt(c-i*i))==double(sqrt(c-i*i)))
            {
                cout<<" "<<i*i<<" "<<c-i*i;
                return true;
            }
        }
        return false;
    }
};