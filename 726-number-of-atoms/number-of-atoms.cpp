class Solution {
public:
string countOfAtoms(string formula) {
    stack<pair<string,int>> st;
    map<string, int> mp;
    int i = 0;

    while (i < formula.size()) {
        if (isupper(formula[i])) { // Start of a new element
            string s = "";
            s += formula[i];
            i++;
            while (i < formula.size() && islower(formula[i])) {
                s += formula[i];
                i++;
            }
            int cnt = 0;
            while (i < formula.size() && isdigit(formula[i])) {
                cnt = cnt * 10 + (formula[i] - '0');
                i++;
            }
            if (cnt == 0) cnt = 1; // Default count is 1 if no digits found
            pair<string,int>p(s,cnt);
            st.push(p);   // Push the pair  onto the stack
        } else if (formula[i] == '(') { // Open parenthesis
            pair<string ,int>p("(",1);
            st.push(p);
            i++;
        } else if (formula[i] == ')') { // Close parenthesis
            i++;
            int cnt = 0;
            while (i < formula.size() && isdigit(formula[i])) {
                cnt = cnt * 10 + (formula[i] - '0');
                i++;
            }
            if (cnt == 0) cnt = 1; // Default count is 1 if no digits found

            // Pop elements until we find the matching '('
            stack<pair<string,int>>st2;
            while (!st.empty() && st.top().first != "(") {
                st.top().second*=cnt;
                st2.push(st.top());
                st.pop();
            }
             if (!st.empty()) st.pop(); // Pop the '('
            while(!st2.empty())
            {
                st.push(st2.top());
                st2.pop();
            }
             
        } else {
            i++; // Ignore invalid characters (though ideally shouldn't happen)
        }
    }

    // Construct the result string
    string ans = "";
    while(!st.empty())
    {
        mp[st.top().first]+=st.top().second;
        st.pop();
    }
    for(auto it:mp)
    {
        ans+=it.first;
        if(it.second>1)ans+=to_string(it.second);
    }

    return ans;
}
};