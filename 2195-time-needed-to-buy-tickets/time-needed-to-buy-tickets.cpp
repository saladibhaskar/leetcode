class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int fr=0,c=0;
        while(t[k]!=0)
        {
            if(t[fr]!=0)
            {
                t[fr]--;
                fr++;
                c++;
            }else
            {
                fr++;

            }
            if(fr==t.size())fr=0;

        }
        return c;
    }
};