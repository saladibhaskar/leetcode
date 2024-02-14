#define pb push_back
class Solution {
public:
     vector<int> rearrangeArray(vector<int>& nums) {
     vector<int>ans(nums.size(),0);
    int  i,k=0,j=1;
     for(i = 0  ;i < nums.size() ; i++)
     {
         if(nums[i]>0){
             ans[k]=(nums[i]);
              k+=2;
             }
        else {
            ans[j]=(nums[i]);
             j+=2;
        }
     }
     return ans;
    }
};