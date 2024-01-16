class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        vector<int>v;
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                cout<<a[i]<<" ";
                 v.push_back(a[i]);
            }
        }
        v.push_back(a[a.size()-1]);
        for(int i=0;i<v.size();i++) a[i]=v[i];
        return v.size();

        
    }
};