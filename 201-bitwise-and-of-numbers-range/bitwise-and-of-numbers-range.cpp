class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int rug=right;
        while(right>left){
            rug=right&(right-1);
            right=rug;
        }
        return rug;
    }
};