class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Edge case: If the array is completely empty, return ""
        if (strs.empty()) return ""; 

        string res = ""; 
        
        // Loop through the characters of the first string
        for (int i = 0; i < strs[0].size(); i++) {
            
            // Compare against every other string in the array
            for (const string& s : strs) {
                
                // If we reach the end of a shorter string, OR the characters don't match
                if (i == s.size() || s[i] != strs[0][i]) {
                    return res;
                }
            }
            // If the loop finishes without returning, the character is common to all
            res += strs[0][i];
        }
        
        // Return the final prefix if we successfully loop through the whole first word
        return res; 
    }
};