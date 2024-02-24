class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        int r=nums.size()-k;
        reverse(nums.begin()+r,nums.end());
        reverse(nums.begin(),nums.begin()+r);
        reverse(nums.begin(),nums.end());
        
        //for(int i=0;i<nums.size();i++)cout<<nums[i]<<" ";
    }
};