class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        while(nums1.size()!=0 && nums2.size()!=0)
        {
            if(nums1[0]==nums2[0])
            {
                return nums1[0];
            }
           else if(nums1[0]<nums2[0])
            {
                nums1.erase(nums1.begin());
            }
            else
            {
                nums2.erase(nums2.begin());
            }
        }
        return -1;
    }
};