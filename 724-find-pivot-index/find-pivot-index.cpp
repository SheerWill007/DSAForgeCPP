class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);

        left[0] = nums[0];
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] + nums[i];
        }

        right[n - 1] = nums[n - 1];
        for (int i = n-2; i >= 0; i--) {
            right[i] = right[i + 1] + nums[i];
        }

        for (int i = 0; i < n; i++) {
            int leftSum = (i == 0) ? 0 : left[i - 1];
            int rightSum = (i == n - 1) ? 0 : right[i + 1];

            if (leftSum == rightSum) {
                return i;
            }
        }
        return -1;
    }
};