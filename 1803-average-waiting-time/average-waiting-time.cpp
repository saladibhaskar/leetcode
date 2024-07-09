class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double curtime=1,sm=0;
        for( int i=0;i<customers.size();i++)
        {
            double arv=customers[i][0];
            double time=customers[i][1];
            if(curtime<=arv)
            {
                sm+=time;
                curtime=arv+time;
            }
            else if(curtime>arv)
            {
                sm+=(time+curtime-arv);
                curtime+=time;
            }
            cout<<sm<<" ";
              
        }
        double n=customers.size();
        double ans=sm/n ;
             return ans;

    }
};