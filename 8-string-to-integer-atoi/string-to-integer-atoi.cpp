class Solution {
public:
    int myAtoi(string s) {
        long int n=0,i,flag=0;
        long int c=0,cn=0;
        for(i=0;i<s.size();i++)
        {
            if((s[i]=='_' || s[i]==' ') && c==0 && cn==0)
            {
                continue;
            }else if((s[i]=='-' || s[i]=='+') && c==0 && cn==0)
            {
                cn++;
                if(s[i]=='-')
                {
                    flag=1;
                }
            }
            else if(int(s[i])-'0'>=0 && int(s[i])-'0'<=9)
            {
               n=n*10+int(s[i])-'0';
               c=1;
               long int t;
               if(flag==1) t=n*-1;
               else t=n;
               if(t>pow(2,31)-1){
                  return (pow(2,31)-1);
               } 
               else if(t<pow(-2,31))
               {
                    return pow(-2,31);
                }    
            }
            else
            {
                break;
            }
        }
        if(flag==1)return n*-1;
        else return n;
    }
};