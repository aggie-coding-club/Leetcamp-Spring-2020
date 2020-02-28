class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // O(N*log(N)) solution 
        
        unordered_map<int, int> m; // Create a map
        
        // 1. Put all numbers into the map
        for(int i = 0; i < nums.size(); i++) // O(N)
        {
            m.insert({nums[i], i}); // Insert pairs <number, index> into map
        }
        
        // 2. Search for the 2 numbers
        for(int i = 0; i < nums.size(); i++) // O(N)
        {
            int n1 = nums[i]; // Get the 1st number
            int n2 = target - n1; // Get the 2nd number
            
            // If we found the 2nd number (basically, we didn't reach the end of the map)
            if(m.find(n2) != m.end()) // O(logN)
            {
            	if(i != m[n2]) // If the number's index is not the same (don't want duplicates)
                {
            		return vector<int>{i, m[n2]}; // We found a match!
                }
            }
        }
        // We didn't find a match, so return nothing 
        // Note: Leetcode does not test this, so this will never execute
        return vector<int>(); 
        
        
    }
};