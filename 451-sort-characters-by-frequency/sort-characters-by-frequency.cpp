class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]+=1;
        }
        string d="";
        int max=0;
        char ele;
        while(mp.size()!=0)
        {
            max=0;
         for(auto i:mp)
         {
             if(i.second>max)
             {
                 max=i.second;
                 ele=i.first;
             }
         }
         d.insert(d.end(),max,ele);
         mp.erase(ele);
        }
        return d;
        
    }
};