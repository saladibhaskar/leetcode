class Solution {
public:
    string makeGood(string s) {
       int i=0,c=0;
        while(i<s.size()-1 && !s.empty())
        {
            int a=s[i],b=s[i+1];
            if(a==b+32 || b==a+32)
            {
                s.erase(i,2);
                c++;
            }
            else i++;
        }
        if(c==0) return s;
        else return makeGood(s);
         
    }
};