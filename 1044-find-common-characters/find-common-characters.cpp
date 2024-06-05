class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       map<char,int>m1,m2,m3;
       for(int i=0;i<words[0].size();i++)
       {
           m1[words[0][i]]+=1;
       }
       for(int i=1;i<words.size();i++)
       {
           for(int j=0;j<words[i].size();j++)
           {
            m2[words[i][j]]+=1;
           }
           for(auto it:m1)
           {
              if(m2.find(it.first)!=m2.end())
              {
                int c1=it.second;
                m3[it.first]=min(c1,m2[it.first]);
                cout<<it.first<<" "<<c1<<" "<<m2[it.first]<<" "<<m1[it.first]<<" ";
              }
           }
           m2.clear();
           m1.clear();
           m1=m3;
           m3.clear();
            
       }
        
       vector<string >ans;
       for(auto it:m1)
       {
        if(it.second>=1)
        {
            int i=it.second;
            while(i)
            {
                //cout<<it.first<<" ";
                string k(1,it.first);
                ans.push_back(k);
                i--;
            }
        }
       }
       return ans;
    }
};