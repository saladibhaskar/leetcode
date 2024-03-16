class Solution {
public:
    int findMaxLength(vector<int>& nums) {
         int sum=0;
        int rem=0;
        unordered_map<int,int>mp;
        int c=0;
        mp[0]=-1;
        int temp=0;
        
        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] == 0 ? -1 : 1);
            if (mp.find(sum) != mp.end()){
                c = max(c, i - mp[sum]);
            }
            else{
                mp[sum] = i;
            }
        }
        return c;
    }
};