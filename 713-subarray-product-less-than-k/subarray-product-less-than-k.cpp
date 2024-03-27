class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        if(!k or k==1) return 0;
        int i = 0, j = 0, ans = 0, n = nums.size();
        long long pr = 1;
        while(j<n)
        {
            pr *= nums[j];
            while(pr >= k) pr /= nums[i++];
            ans += (j-i+1);
            j++;
        }
        return ans;
    }
};