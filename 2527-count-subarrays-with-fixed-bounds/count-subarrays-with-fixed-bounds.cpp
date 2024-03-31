class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int mine=-1,maxe=-1;
        int lp=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK or nums[i]>maxK){
                lp=i;
            }
            if(nums[i]==minK){
                mine=i;
            }
            if(nums[i]==maxK){
                maxe=i;
            }
            int smaller=min(mine,maxe);
            long long temp=smaller-lp;
            ans+=(temp<=0)?0:temp;
        }
        return ans;
    }
};