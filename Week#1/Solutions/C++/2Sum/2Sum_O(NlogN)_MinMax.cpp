class Solution {
public:
    
    // Our custom sorting function 
    static bool cmp(std::pair<int, int>& p1, std::pair<int, int>& p2)
    {
        // This function is called during sorting
        // Compare numbers in the pair and return the smaller number to sort from least -> greatest
        return p1.first < p2.first; 
    }
    
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // Idea: Sort the array
        // Start from the endpoints, and keep adjusting min/max until found a sum
        // We use a vector of pairs to keep track of the number *and* it's index in the unsorted array
        
        vector<std::pair<int, int>> v;
        
        // 1. Put all numbers into vector of pairs
        for(int i = 0; i < nums.size(); i++)
        {
            // The curly braces {} are used to make a pair
            // Alternatively, you can use C++ "make_pair" function 
            v.push_back({nums[i], i}); // Insert <number, index>
        }
        
        // 2. Sort vector
        sort(v.begin(), v.end(), cmp); // cmp is our custom sorting function 
        
        // 3. Search vector
        int min = 0, max = v.size() - 1;
        while(min <= max)
        {
            if( (v[min].first + v[max].first) > target )
            {
                max--; // We overshot, so decrement max
            }
            else if( (v[min].first + v[max].first) < target )
            {
                min++; // Smaller than the target, so increment min 
            }
            else // Found a match!
            {
                // Get indices of numbers
                int idx1 = v[min].second;
                int idx2 = v[max].second;
                return vector<int> {idx1, idx2};
            }
        }
        
        return vector<int>(); // Return empty vector if no solution (not tested)
        
    }
};