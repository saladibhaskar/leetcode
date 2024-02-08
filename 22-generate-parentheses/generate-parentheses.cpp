class Solution {
public:
    void gen( int n,vector<string>&v,string s,int open,int close)
    {
        if(open+close>=n*2)
        {
         v.push_back(s);
         return;
        }
        if(close>open) return;
        if(open==n)
        {
            gen(n,v,s+')',open,close+1);
        }else{
        gen(n,v,s+'(',open+1,close);
        gen(n,v,s+')',open,close+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        string s="(";
        gen(n,v,s,1,0);
        return v;
    }
};