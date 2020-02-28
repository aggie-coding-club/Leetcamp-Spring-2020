class Solution {
public:
    
    int searchInsert(vector<int>& nums, int target) {
 
        // Iterative Solution - O(log(N))
        
        int l = 0, r = nums.size();
        while(l < r)
        {
            int mid = l + (r-l)/2;
            
            if(nums[mid] == target) return mid; // Found a match!
            else if(nums[mid] > target) r = mid; // Search left-half
            else l = mid+1; // Search right-half
        }
        return l; // return r also works 
        
    }
};