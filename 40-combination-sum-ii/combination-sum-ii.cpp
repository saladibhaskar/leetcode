class Solution {
public: 
    set<vector<int>>ans;
    void  comb(vector<int>&v,vector<int>&v1,int t,int i,int sm=0)
    {
      if(sm==t)
      {
          ans.insert(v1);
          return;
      }
      if(i>=v.size() ||sm>t) return;
      v1.push_back(v[i]);
      comb(v,v1,t,i+1,sm+v[i]);
      while (i+1 < v.size() and v[i]==v[i+1]) i++;
      v1.pop_back();
      comb(v,v1,t,i+1,sm);
     
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>v1;
        sort(candidates.begin(),candidates.end());
        comb(candidates,v1,target,0);
        vector<vector<int>>vec;
        for(auto it:ans) vec.push_back(it);
        return vec;
    }
};