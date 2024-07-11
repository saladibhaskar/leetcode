class Solution {
public:
    string reverseParentheses(string s) {
       stack<int>st;
       int i=0;
       while(i<s.size())
       {
         if(s[i]=='(')
         {
            st.push(i);
         }
         if(s[i]==')')
         {
            reverse(s.begin()+st.top(),s.begin()+i);
            st.pop();
         }
         i++;
       }
       string ans;
       for(int i=0;i<s.size();i++)
       {
        if(s[i]!='(' && s[i]!=')')ans+=s[i];
       }
    return ans;
    }
};