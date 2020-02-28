class Solution {
public:
    
    // Recursive Solution - O(log(N))
    int search(vector<int>& nums, int target, int l, int r)
    {
        // 1. Base Cases
        if(l >= r) return l;
        int mid = l + (r-l)/2; // Compute middle 
        if(nums[mid] == target) return mid; // Found a match?
        
        // 2. Recursive Case
        else if(nums[mid] > target) return search(nums, target, l, mid); // Search left-half
        else return search(nums, target, mid+1, r); // Search right-half
    }
    
    int searchInsert(vector<int>& nums, int target) {
        
        // Recursive Solution
        return search(nums, target, 0, nums.size());
    }
};