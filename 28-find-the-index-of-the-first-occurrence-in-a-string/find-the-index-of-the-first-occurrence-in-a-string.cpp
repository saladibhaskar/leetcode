class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int s=needle.size();
        for(int i=0;i<n;i++)
        {
            if(i+s>n)
            {

                return -1;
            }
            cout<<(haystack.substr(i,s))<<" ";
            if(haystack.substr(i,s)==needle)
            {
                return i;
            }
        }
        return -1;
        
    }
};