class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         map<int,int>mp;
         int i;
        for(i=0;i<nums1.size();i++)
        {
           mp[nums1[i]]+=1;
        }
        set<int>st;
        for(i=0;i<nums2.size();i++)
        {
            if(mp.find(nums2[i])!=mp.end())
            {
              st.insert(nums2[i]);
            }
        }
        vector<int>a;
        i=0;
        for(auto it:st)
        {
            a.push_back(it);
            i++;
        }
        return a;
    }
};