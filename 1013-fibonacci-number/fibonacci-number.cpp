class Solution {
public:
    vector<int>sb;
    int a=0,b=1;
    int fibo(int n)
    {
        if(sb[n]==-1)
        {
            int res;
            if(n==0 || n==1)return n;
            else
            {
                res =fibo(n-1)+fibo(n-2);
            }
            sb[n]=res;
        }
        return sb[n];

    }
    int fib(int n) {
        sb.assign(n+1,-1);
       return fibo(n);
    }
};