class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        // Sort folders lexicographically
        sort(folder.begin(), folder.end());
        
        vector<string> result;
        // Add the first folder to result as there’s no previous folder to compare with
        result.push_back(folder[0]);
        
        for (int i = 1; i < folder.size(); ++i) {
            // Get the previous folder in result
            string& prevFolder = result.back();
            
            // Check if current folder is a subfolder of the previous folder
            // This is true if it starts with prevFolder + '/'
            if (!(folder[i].substr(0, prevFolder.size()) == prevFolder && folder[i][prevFolder.size()] == '/')) {
                result.push_back(folder[i]);
            }
        }
        
        return result;
    }
};
