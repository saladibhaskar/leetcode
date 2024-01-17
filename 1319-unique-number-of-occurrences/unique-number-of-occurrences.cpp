 class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        map<int,int>map2;
        map<int,int>map1;
        vector<int>v;
        for(int i=0;i<n;i++){
            map2[arr[i]]++;
        }
        for(auto it:map2){
            v.push_back(it.second);
        }
        for(int i=0;i<v.size();i++){
            map1[v[i]]++;
        }
        for(auto it:map1){
            if(it.second>=2){
                return false;
            }
        }
        return true;
    }
};
