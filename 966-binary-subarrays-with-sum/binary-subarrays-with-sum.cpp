class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum=0;
        int rem=0;
        unordered_map<int,int>mp;
        int c=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        rem=sum-goal;
        if(mp.find(rem)!=mp.end()){
            c+=mp[rem];
        }
        mp[sum]++;
        }
        return c;
        }
};