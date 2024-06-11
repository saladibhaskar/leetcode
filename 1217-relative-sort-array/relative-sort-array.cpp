class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<arr1.size();i++)
        {
            mp[arr1[i]]+=1;
        }
        for(int i=0;i<arr2.size();i++)
        {
            v.insert(v.end(),mp[arr2[i]],arr2[i]);
            mp.erase(arr2[i]);
        }
        for(auto it:mp)
        { 
            v.insert(v.end(),it.second,it.first);
        }
        return v;

         
    }
};