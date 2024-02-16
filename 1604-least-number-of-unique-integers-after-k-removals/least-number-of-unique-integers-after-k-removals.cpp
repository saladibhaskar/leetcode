class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
       unordered_map<int,int>mp1;
        vector<int>mp2;
        for(int i=0;i<arr.size();i++)
        {
            mp1[arr[i]]+=1;
             
        }
        for(auto &it:mp1)
        {
            mp2.push_back(it.second);
        }
        sort(mp2.begin(),mp2.end());
        int c=mp2.size();
        for(int i=0;i<mp2.size();i++){
            if(k<mp2[i])
            {
                break;
            }
            else if(k==mp2[i])
            {
                c--;
             // mp2.erase(mp2.begin());
              break;
            }else if(k>mp2[i])
            {
                k-=mp2[i];
                c--;
                //mp2.erase(mp2.begin());
            }
           
        }
        return c;

        
    }
};