class Solution {
public:
    string makeGood(string s) {
       int i=0,c=0;
       stack<char>st;
       while(i<s.size())
       {
        if(st.empty()) st.push(s[i]);
        else
        {
            int a=s[i],b=st.top();
            if(a==b+32 || b==a+32) st.pop();
            else st.push(s[i]);
        }
        i++;
       }
       s.clear();
       while(!st.empty())
       {
        s=st.top()+s;
        st.pop();
       }
       return s;
         
    }
};