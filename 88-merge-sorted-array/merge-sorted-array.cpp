class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
       int i=0;
        int j=0;
        vector<int>v;
        while(i<m && j<n)
        {
            if(n1[i]<=n2[j]){
                v.push_back(n1[i]);
                i+=1;
            }
            else{
                v.push_back(n2[j]);
                j+=1;
                }
        }
        while(i<m)
        {
            v.push_back(n1[i]);
            i+=1;}
        while(j<n)
        {
            v.push_back(n2[j]);
            j++;
        }
        i=0;
        while(i<v.size())
        {
            n1[i]=v[i];
            i++;
        }
    }
};