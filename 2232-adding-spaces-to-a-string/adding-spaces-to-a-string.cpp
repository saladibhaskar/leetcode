class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
    int sp = 0, i = 0; // Pointer for spaces and characters in `s`
    string ans = "";   // Result string
    
    while (i < s.size()) {
        // If current index matches a space position, add a space
        if (sp < spaces.size() && i == spaces[sp]) {
            ans += ' ';
            sp++;
        }
        // Add the current character from `s`
        ans += s[i];
        i++;
    }

    return ans;
}
};