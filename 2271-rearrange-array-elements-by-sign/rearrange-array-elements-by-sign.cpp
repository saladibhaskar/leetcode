#define pb push_back
class Solution {
public:
     vector<int> rearrangeArray(vector<int>& nums) {
     vector<int > v1;
     vector<int>v2;
     for(int i=0;i<nums.size();i++)
     {
         if(nums[i]>0)v1.pb(nums[i]);
         else v2.pb(nums[i]);
     }   
     vector<int>ans;
    int  i=0;
     while(i<v1.size())
     {
         ans.pb(v1[i]);
         ans.pb(v2[i]);
         i++;
     }
     return ans;
    }
};