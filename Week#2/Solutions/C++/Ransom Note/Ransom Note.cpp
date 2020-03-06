class Solution {
public:
    
    // Create a frequency list for a given string
    vector<int> createFrequencyList(string s)
    {
        vector<int> freqList(26, 0); // Size 26 (for 26 letters) and each cell is initialized to 0
        for(int i = 0; i < s.size(); i++)
        {
            char letter = s[i]; // Get the letter
            int idx = letter - 'a'; // Get the corresponding index using ASCII values (a=0, b=1, etc)
            freqList[idx]++; // Increment that index's count (because we just found the corresponding letter)
        }
        return freqList;
    }
    
    bool canConstruct(string ransomNote, string magazine) {
        
        // Note: Solution is O(N), but because list is only 26 letters, time complexity is very small
        
        // 1. Create frequency lists - O(N)
        vector<int> ransomFreqList = createFrequencyList(ransomNote);
        vector<int> magazineFreqList = createFrequencyList(magazine);
        
        // 2. Check both vectors: For each letter, magazine should have more or same letters as ransom 
        // (Equivalently, if magazine has fewer letter than ransom, return false immediately)
        for(int i = 0; i < ransomFreqList.size(); i++) // O(N)
        {
            if(magazineFreqList[i] < ransomFreqList[i]) // Insufficient letters to create ransom note
            {
                return false; // Not possible
            }
        }
        
        // We have enough letters from magazine to create ransom note! Return true
        return true;
        
    }
};