class Solution {
public:
    int minOperations(vector<string>& logs) {
        int rq=0;
        for(int i=0;i<logs.size();i++)
        {
            if(logs[i]=="../")
            {
                if(rq>0)rq--;
                else continue;
            }
            else if(logs[i]=="./")
            {
                continue;
            }
            else
            {
                rq++;
            }
        }
        if(rq>=0)return rq;
        return 0;
    }
};