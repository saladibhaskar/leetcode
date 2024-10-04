class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int i=0,j=skill.size()-1;
        long long pr=0;
        int eq=skill[0]+skill[j];
        while(i<j)
        {
            if(skill[i]+skill[j]==eq)
            {
                pr+=skill[i]*skill[j];
                i++;
                j--;
            }else
            {
                return -1;
            }
        }
        return pr;
        
    }
};