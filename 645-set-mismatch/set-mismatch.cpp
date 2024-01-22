class Solution {
public:
    vector<int> findErrorNums(vector<int>& a) {
        vector<int>v;
        int sum=0;
        int c=0;
        map<int ,int>mp;
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]]+=1;
            if(mp[a[i]]==2)
            {
                v.push_back(a[i]);
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