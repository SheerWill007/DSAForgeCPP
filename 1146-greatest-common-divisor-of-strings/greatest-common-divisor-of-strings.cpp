


#include <iostream>
using namespace std;

class Solution {
public:
    bool isDivisor(string s, string base) {
        if (s.length() % base.length() != 0)
        return false;

        string constructed = "";
        int times = s.length() / base.length();
        for (int i = 0; i < times; i++)
            constructed += base;

            return constructed ==s;
    }

    string gcdOfStrings(string str1, string str2) {
        int minLen = min(str1.length(), str2.length());
        
        for (int len = minLen; len >= 1; len--) {
            string candidate = str1.substr(0, len);
            
            if (isDivisor(str1, candidate) && isDivisor(str2, candidate))
                return candidate;
        }
        
        return "";
    }
};