class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        
        string result;
        result.reserve(n + m);   // Prevents multiple reallocations
        
        int i = 0;
        while (i < n || i < m) {
            if (i < n) result += word1[i];
            if (i < m) result += word2[i];
            i++;
        }
        
        return result;
    }
};