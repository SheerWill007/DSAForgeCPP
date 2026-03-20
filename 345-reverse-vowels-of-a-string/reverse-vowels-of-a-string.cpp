#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {
            'u','o','i','e','a',
            'U','O','I','E','A',
        };
        
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            while (left < right && vowels.find(s[left]) == vowels.end()) {
                left++;
            }

            while (left < right && vowels.find(s[right]) == vowels.end()) {
                right--;
            }

            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};