class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]+=1;
        }
        for(auto it:mp)
        {
            if(it.second%2!=0)return false;
        }
        return true;
    }
};