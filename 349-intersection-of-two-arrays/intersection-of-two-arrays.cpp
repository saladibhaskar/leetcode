class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         unordered_map<int,int>mp;
         int i;
        for(i=0;i<nums1.size();i++)
        {
           mp[nums1[i]]+=1;
        }
        vector<int>v;
        for(i=0;i<nums2.size();i++)
        {
            if(mp.size()==0)break;
            if(mp.find(nums2[i])!=mp.end())
            {
              v.push_back(nums2[i]);
              mp.erase(nums2[i]);
            }
        }
        return v;
    }
};