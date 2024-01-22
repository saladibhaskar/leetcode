class Solution {
public:
    vector<int> findErrorNums(vector<int>& a) {
        vector<int>v;
        int sum=0;
        int c=0;
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<a.size();j++){
             if(a[i]==a[j] && i!=j)
             {
                 v.push_back(a[i]);
                 c+=1;
                 break;
             }
            }
             if(c==1)
             {
                 break;
             }
        }
        for(int i=0;i<a.size();i++)
        {
            sum+=a[i];
        }
        int s=sum-v[0];
        int n=a.size();
        int s2=n*(n+1)/2;
        int r=s2-s;
        v.push_back(r);
        return v;
    }
};