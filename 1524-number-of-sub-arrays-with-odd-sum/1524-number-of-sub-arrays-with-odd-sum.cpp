class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0;
        int even = 1, odd = 0;
        int mod = 1e9 + 7;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (sum % 2 == 0) {
                cnt += odd;
                even++;
            } else {
                cnt += even;
                odd++;
            }

            cnt %= mod;
        }
        return cnt;
    }
};