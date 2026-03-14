#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        
        double windowSum = 0;
        
        // First window
        for(int i = 0; i < k; i++) {
            windowSum += nums[i];
        }
        
        double maxSum = windowSum;
        
        // Sliding window
        for(int i = k; i < n; i++) {
            windowSum += nums[i];      // add next element
            windowSum -= nums[i - k];  // remove previous element
            
            maxSum = max(maxSum, windowSum);
        }
        
        return maxSum / k;
    }
};