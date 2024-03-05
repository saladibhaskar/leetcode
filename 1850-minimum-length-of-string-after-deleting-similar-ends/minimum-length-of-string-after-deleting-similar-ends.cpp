class Solution {
public:
    int minimumLength(string s) {
    int i=0,j=s.size()-1,c=0;
    if(s.size()==1)return 1;
    if(s.size()==2)
    {
        if(s[0]==s[1])return 0;
        else return 2;
    }
    while(i<j)
    {
        if(s[i]==s[j])
        {
            if(s[i+1]==s[i]){
                i++;
            }
            else if(s[j]==s[j-1]){
                j--;
            }
            else {
                 cout<<i<<"+"<<j<<" ";
                 if(j-i==2)
                 {
                     c=1;
                     break;
                 }
                i++;
                j--;
            }
        }else{
            c=j-i>=0?j-i+1:0;
            cout<<i<<"+"<<j<<" ";
            break;
        }
    }
    return c;
    }
};