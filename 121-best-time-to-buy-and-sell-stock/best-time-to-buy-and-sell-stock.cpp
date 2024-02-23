class Solution {
public:
    int maxProfit(vector<int>& p) {
      int min= p[0];
      p.erase(p.begin());
      int max=0;
      for(auto i:p)
      {
          if(i<min)
          {
              min=i;
             
          }else
          {
              if(i-min>max)
              {
                  max=i-min;
              }
          }
          
      }
       return max;
    }
};