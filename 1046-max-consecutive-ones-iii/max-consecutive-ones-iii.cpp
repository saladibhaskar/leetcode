class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
         int i=0,j=0,mx=0;
         while(j<nums.size())
         {
             if(nums[j]==0)
             {
                 k--;
             }
             if(k<0)
             {
                 if(nums[i]==0)
                 {
                     k++;
                 }
                 if(j-i>mx)
                 {
                    mx=j-i;
                 }
                 i++;
             }
             j++;
         }
         if(j-i>mx)
         {
             mx=j-i;
         }
         return mx;
    }
};