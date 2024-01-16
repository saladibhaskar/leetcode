class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int max=0;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]+nums[j]>max)
            {
                max=nums[i]+nums[j];
            }
            i++;
            j--;
        }

        return max;
        
    }
};