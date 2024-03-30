class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int>mp(501,0);
        for(auto i:nums)
        {
            mp[i]+=1;
        }
        for(auto it:mp)
        {
            if(it%2!=0)return false;
        }
        return true;
    }
};