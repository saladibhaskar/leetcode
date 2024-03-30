class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int ans=0,ans1=0;
        int pre=0;
        unordered_map<int,int>mp;
        int n=nums.size();
        int t=k-1;
        while(j<n){
            mp[nums[j]]++;
     
        while(mp.size()>k){
            mp[nums[i]]--;
            if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
            }
            i++;
            }

          
                ans+=j-i+1;

            j++;
        }

        i=0;
        j=0;
        mp.clear();
        while(j<n){
            mp[nums[j]]++;
     
        while(mp.size()>t){
            mp[nums[i]]--;
            if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
            }
            i++;
            }

            
                ans1+=j-i+1;
            
            j++;
        }
        return ans-ans1;
    }
};