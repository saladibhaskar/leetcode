class Solution {
public:
    vector<vector<int>> subsets(vector<int>& a) {
    int i;
    vector<int>v;
    vector<vector<int>>res;
    cout<<"hii";
    for(i=0;i<pow(2,a.size());i++)
    {
        int j=0;
        int num=i;
          while(num!=0)
          {
              if(num&1)
              {
                v.insert(v.begin(),a[j]);
               // cout<<a[j]<<" ";
              }
              num=num>>1;
              //cout<<num;
              j++;
          }
          res.push_back(v);
          v.clear();  
    }
    return res;
    }
};