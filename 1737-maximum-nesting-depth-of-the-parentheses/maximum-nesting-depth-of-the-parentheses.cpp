class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        vector<int>v,temp;
        int c=0,k=0;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty() && s[i]=='(')
            {
                st.push(s[i]);
            }
            else{
                if(s[i]=='(')
                {
                    if(c>=1)
                    {
                        int a=c+st.size();
                        k=max(a,k);
                        c=0;
                    } 
                    st.push('(');
                }else if(s[i]==')')
                {
                    st.pop();
                    c++;
                    if(st.empty()){
                        k=max(c,k);
                        c=0;
                    }
                }

            }
        }
        return k;
    }
};