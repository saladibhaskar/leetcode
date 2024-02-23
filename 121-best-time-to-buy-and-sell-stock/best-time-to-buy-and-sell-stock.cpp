class Solution {
public:
    int maxProfit(vector<int>& p) {
      int min= p[0];
      int max=0;
      for(int i=1;i<p.size();i++)
      {
          if(p[i]<min)
          {
              min=p[i];
             
          }else
          {
              if(p[i]-min>max)
              {
                  max=p[i]-min;
              }
          }
          
      }
       return max;
    }
};