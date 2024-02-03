class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
       int i;
       int sum1=p1[0],sum2=p2[0];
       if(p1.size()==1)
       {
        if(sum1>sum2) return 1;
        else if(sum1<sum2) return 2;
        return 0;   
       }
       sum1+=(p1[0]==10)?p1[1]*2:p1[1];
       sum2+=(p2[0]==10)?p2[1]*2:p2[1];
        for(i=2;i<p1.size();i++){

            sum1+=(p1[i-1]==10 || p1[i-2]==10)?p1[i]*2:p1[i];
            sum2+=(p2[i-1]==10 || p2[i-2]==10)?p2[i]*2:p2[i];
        }
        if(sum1>sum2) return 1;
        else if(sum1<sum2) return 2;
        return 0;
    }
};