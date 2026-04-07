#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }
        reverse(words.begin(), words.end());

        string result = "";
        for (int i = 0; i < words.size(); i++) {
            result += words[i];
            if (i != words.size() - 1) {
                result += " ";
            }
        }
        return result;
    }
};