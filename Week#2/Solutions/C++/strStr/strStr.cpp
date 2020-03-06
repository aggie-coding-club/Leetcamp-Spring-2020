class Solution {
public:
    int strStr(string haystack, string needle) {
        
        // Edge cases
        if(needle == "") return 0; 
        if(needle.size() > haystack.size()) return -1; // Substring can't be larger than string 
        
        int idx = 0;
        while(idx < haystack.size())
        {
            int j = 0, i=idx;
            while(i < haystack.size() && haystack[i] == needle[j]) // Stop at the first mismatch
            {
                i++;
                j++;
                if(j >= needle.size()) return (i-j);
            }
            idx++; 
        }
        return -1;
        
    }
};