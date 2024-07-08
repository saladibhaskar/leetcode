class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        int i=1;
         for( int i=1;i<=n;i++)
         {
            q.push(i);
         }
         while(q.size()!=1)
         {
            if(i==k)
            {
                q.pop();
                i=0;
            }
            else
            {
                int e=q.front();
                q.pop();
                q.push(e);
            }
            i++;
         }
         return q.front();
    }
};