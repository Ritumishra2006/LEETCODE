class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int dup = -1;
        int missing = -1;
        int n = nums.size();
        vector<int> freq(n+1, 0);
        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        for(int i = 1; i <= n; i++) {
            if(freq[i] == 0) {
                missing = i;
            }
            if(freq[i] == 2) {
                dup = i;
            }
        }
        return {dup, missing};
    }
};