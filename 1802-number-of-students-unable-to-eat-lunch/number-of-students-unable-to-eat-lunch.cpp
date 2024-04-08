class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int c=0,i=0,j=0;
        while(students.size()!=0)
        {
            if(c>students.size())return students.size();
            if(students[0]==sandwiches[0])
            {
                sandwiches.erase(sandwiches.begin());
                students.erase(students.begin());
                c=0;
            }
            else
            {
              students.push_back(students[0]);
              students.erase(students.begin());
              c++;
            }
        }
        return students.size();
    }
};