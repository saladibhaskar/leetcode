class Solution {
public:
    string minRemoveToMakeValid(string s) {
       stack<char>st;
       int open=0,close=0,i=0;
       while(i<s.size())
       {
            if(s[i]=='(')open++;
            if(s[i]==')')
            {
                if(close==open)s.erase(i,1);
                else {
                    close++;
                    i++;
                }
            }else
            {
                i++;
            } 
        }  

         i=0;
         open=close;
         while(i<s.size())
       {
        if(s[i]==')')close--;
        if(s[i]=='(')
        {
            if(open<=0)s.erase(i,1);
            else {
                open--;
                i++;
            }
        }else
        {
            i++;
        }   

       }
       return s;
    }
};