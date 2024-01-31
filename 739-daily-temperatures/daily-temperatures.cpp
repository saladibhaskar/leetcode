class Solution {
public:
    vector<int> dailyTemperatures(vector<int>&a) {
        stack<int>st;
        vector<int>v(a.size(),0);
        int c=0;
        int i;
        for(i=0;i<a.size();i++)
        {   while(!st.empty() and a[st.top()]<a[i]){
               v[st.top()]=i-st.top();
               st.pop();
            }
            st.push(i);
        }
        return v;
    }
};