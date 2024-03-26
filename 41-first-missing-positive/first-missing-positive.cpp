class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)mp[nums[i]]+=1;
        }
        for(int i=1;i;i++)
        {
            if(mp.find(i)==mp.end())return i;
            else mp.erase(i);
        }
        return mp.begin()->first;
    }
};