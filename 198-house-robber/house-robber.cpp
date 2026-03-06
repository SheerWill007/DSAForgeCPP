class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1 = 0;
        int prev2 = 0;

        for (int num : nums) {
            int cur = max(prev1, prev2 + num);
            prev2 = prev1;
            prev1 = cur;
        }

        return prev1;
    }
};