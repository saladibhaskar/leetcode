class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,c=0,pr=1;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)c++;
            else pr*=nums[i];
        }
        vector<int>v(nums.size(),0);
        if(c>1)return v;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0) nums[i]=pr;
            else if(c==1)nums[i]=0;
            else nums[i]=pr/nums[i];
        }
        return nums;
    }
};