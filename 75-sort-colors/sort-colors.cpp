class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]+=1;
        }
        nums.clear();
        for(auto it:mp)
        {
            nums.insert(nums.end(),it.second,it.first);
        }
        
    }
};