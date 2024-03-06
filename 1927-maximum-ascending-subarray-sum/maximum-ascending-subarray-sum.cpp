class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int i=0,c=0,mx=0,sm=nums[0],ms=nums[0];
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1]){
                sm+=nums[i];
                if(sm >ms){
                    ms=sm;
                }
            }
            else{
                sm=nums[i];
            }
        }
        return ms;
    }
};