class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c=0;
        for( int i=0 ;i<details.size();i++)
        {
            string age=details[i].substr(11,2);
            if(stoi(age)>60)c++;
        }
        return c;
    }
};