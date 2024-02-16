class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
       unordered_map<int,int>mp1;
        vector<int>mp2;
        for(int i=0;i<arr.size();i++)
        {
            mp1[arr[i]]+=1;
             
        }
        for(auto it:mp1)
        {
            mp2.push_back(it.second);
             //cout<<it.second;
            
        }
        sort(mp2.begin(),mp2.end());
        while(true){
            cout<<mp2.size();
            if(k<mp2[0])
            {
                //cout<<k;
                break;
            }
            else if(k==mp2[0])
            {
                //cout<<k;
                k=0;
              mp2.erase(mp2.begin());
              //break;
            }else if(k>mp2[0])
            {
                //cout<<k;
                k-=mp2[0];
                mp2.erase(mp2.begin());
            }
           
        }
        return mp2.size();

        
    }
};