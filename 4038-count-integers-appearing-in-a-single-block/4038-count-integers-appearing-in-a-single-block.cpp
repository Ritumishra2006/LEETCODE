class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {

            mp[nums[i]]++;
            }
        } 
        for(auto it : mp) {
            if(it.second == 1)
                cnt++;
        }
        return cnt;
    }
};