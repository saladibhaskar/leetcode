class Solution {
public:
    int addDigits(int num) {
        if(num<=9)return num;
        int n=num;
        int sm=0;
        while(n!=0)
        {
          sm+=n%10;
          n/=10;
        }
        return addDigits(sm);
    }
};