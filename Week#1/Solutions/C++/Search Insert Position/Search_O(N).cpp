class Solution {
public:
    
    int searchInsert(vector<int>& nums, int target) {
        
        // Iterative Solution - O(N)
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target) return i; // Found a match?
            
            // Otherwise, did we find a position to insert the number?
            else if(nums[i] > target) return i; // First number greater than target, so stop
        }
        
        // If we didn't return in the for loop, it means target is the largest number
        // Therefore, put it at the end ( which is nums.size() )
        return nums.size(); 
        
    }
};