class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>mp;
        int n=*max_element(nums.begin(),nums.end());
        for(int i=1;i<=nums.size()+1;i++)mp[i]+=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0 && nums[i]<=nums.size())mp.erase(nums[i]);
        }
        return mp.begin()->first;
    }
};