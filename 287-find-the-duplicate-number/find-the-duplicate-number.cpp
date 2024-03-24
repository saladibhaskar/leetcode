class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            int a=nums[i];
            int b=nums[i+1];
            auto c=a^b;
            cout<<c;
            if(c==0)return a;
        }
        return 0;
    }
};