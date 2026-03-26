class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime [1] = false;

        for (int i = 2;i * i <=n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        vector<vector<int>> result;

        for(int x = 2;x <= n / 2; x++) {
            if (isPrime[x] && isPrime[n - x]) {
                result.push_back({x,n - x});
            }
        }

        return result;
    }
};