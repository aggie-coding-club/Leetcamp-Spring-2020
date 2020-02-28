class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
     
        // Idea: Iterate over entire matrix
        // In order for matrix to be Toeplitz, any element must be equal to the element to its top-left 
        // Why? Because every row of the matrix is essentially just shifted to the right by just 1! 
        
        // O(N^2) solution
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[i].size(); j++)
            {
                if(i > 0 && j > 0)
                {
                    if(matrix[i][j] != matrix[i-1][j-1]) 
                    {
                        return false; // Found a mismatch - not Toeplitz!
                    }
                }
            }
        }
        return true; // Everything matches! So matrix is Toeplitz
        
    }
};