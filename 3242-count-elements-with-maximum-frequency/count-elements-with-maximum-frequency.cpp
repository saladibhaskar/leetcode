class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]+=1;
        }
        int mx=0,c=0;
        for(auto it:mp)
        {
            mx=max(it.second,mx);
        }
        for(auto it:mp)
        {
            if(it.second==mx)c+=it.second;
        }
        return c;


    }
};