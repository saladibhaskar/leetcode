class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0)return true;
        for(int i=0;i<=sqrt(c);i++)
        { 
            if(int(sqrt(c-i*i))==double(sqrt(c-i*i)))
            {
                return true;
            }
        }
        return false;
    }
};