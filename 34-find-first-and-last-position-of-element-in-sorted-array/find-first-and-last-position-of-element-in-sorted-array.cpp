class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
        int i=0;
        int d,b,c=0;
        int j=a.size()-1;
        while(i<=j)
        {
            if(a[i]==t && a[j]==t)
            {
                c=1;
                break;
            }
            else if(a[i]==t ){
                 j--;
            }
            else
            {
                 i++;
            }
        }
        if(c==0){
            vector<int>v={-1,-1};
            return v;
        }
        else{ 
         vector<int>v={i,j};
         return v;
        }
    }
};