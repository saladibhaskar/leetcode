class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        map<int,int>mp;
        int c=0;
        for( int i=0;i<nums.size();i++)
        {
            mp[nums[i]]+=1;
        }
        if(mp.size()==nums.size())
        {
            {
                return 0;
            }
        }else
        {
            int i=0;
            while(i<nums.size())
            {
                if(nums.size()-i>=3)
                {
                    c+=1;
                    mp[nums[i]]-=1;
                    mp[nums[i+1]]-=1;
                    mp[nums[i+2]]-=1;
                    if(mp[nums[i]]==0)mp.erase(nums[i]);
                    if(mp[nums[i+1]]==0)mp.erase(nums[i+1]);
                    if(mp[nums[i+2]]==0)mp.erase(nums[i+2]);
                    i+=3;
                }
                else{
                    return c+1;
                }
                if(mp.size()==nums.size()-i)return c;
            }
        }
       return c; 
    }
};