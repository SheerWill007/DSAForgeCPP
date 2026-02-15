class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int best = 0;
        int current = 0;

        for ( int x : nums) {
            if (x == 1) {
                current++;
                best = max(best, current);
            } else {
                current = 0;
            }
        }
        return best;
    }
};