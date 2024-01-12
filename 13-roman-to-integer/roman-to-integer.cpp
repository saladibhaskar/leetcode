class Solution {
public:
    int prio(char c)
    {
        if(c=='I')return 1;
        if(c=='V')return 5;
        if(c=='X')return 10;
        if(c=='L')return 50;
        if(c=='C')return 100;
        if(c=='D')return 500;
        if(c=='M')return 1000;
        return 0;

    }
    int romanToInt(string s) {
      stack<char>st;
      int sum=0;
      for(int i=0;i<s.size();i++)
      {
          if(st.empty())
          {
              st.push(s[i]);
          }
          else if(prio(s[i])>prio(st.top()))
          {
                sum+=prio(s[i])-prio(st.top());
                st.pop();
          }else
          {
              st.push(s[i]);
          }
      }
      while(!st.empty())
      {
          sum+=prio(st.top());
          st.pop();
      }
      return sum;
    }
};