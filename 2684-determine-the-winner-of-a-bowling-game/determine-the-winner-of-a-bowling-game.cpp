class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
       int i=2;
       int sum1=p1[0],sum2=p2[0];
       if(p1.size()==1 && p2.size()==1)
       {
        if(sum1>sum2) return 1;
        else if(sum1<sum2) return 2;
        return 0;
           
       }
       if (p1[0]==10) sum1+=p1[1]*2;
       else sum1+=p1[1];
        while(i<p1.size()){

            if(p1[i-1]==10 || p1[i-2]==10)
            {
                sum1+=p1[i]*2;
            }else
            {
                sum1+=p1[i];
            }
            i++;
        }
        i=2;
        if (p2[0]==10) sum2+=p2[1]*2;
        else sum2+=p2[1];
         while(i<p2.size()){

            if(p2[i-1]==10 || p2[i-2]==10)
            {
                sum2+=2*p2[i];
            }else
            {
                sum2+=p2[i];
            }
            i++;
        }
        
         
       // cout<<s1<<" "<<s2<<" ";
        if(sum1>sum2) return 1;
        else if(sum1<sum2) return 2;
        return 0;
    }
};