class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // Idea: Use a map + sorting in order to group strings
        
        // 1. Group similar strings together using a map
        map<string, vector<string>> anagramMap;
        for(int i = 0; i < strs.size(); i++)
        {
            string originalStr = strs[i]; // E.g: "ate"
            string copyStr = originalStr; // E.g: "ate"
            sort(copyStr.begin(), copyStr.end()); // E.g: "aet"
            
            // E.g: map: {"aet" -> ["ate", "eat", "eta"]}
            anagramMap[copyStr].push_back(originalStr); 
        }
        
        // 2. Create 2D vector (output requires 2D vector)
        vector<vector<string>> anagramList; // Create a 2D vector 
        for(auto it : anagramMap) // Iterate through map
        {
            anagramList.push_back(it.second); // Add vector of similar anagrams to list
        }
        
        return anagramList;
        
    }
};