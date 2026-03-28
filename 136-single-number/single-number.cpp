#include <iostream>
#include <vector>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (int num : nums){
            result ^= num;
        }
        return result;
    }

    int main() {
        vector<int> nums = {4,1,2,1,2};
        cout << "Single number:" <<singleNumber(nums) << endl;
        return 0;
    }
};