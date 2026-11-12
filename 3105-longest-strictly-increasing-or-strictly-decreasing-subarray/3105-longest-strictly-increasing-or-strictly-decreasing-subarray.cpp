class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int Icnt = 1;
        int Dcnt = 1;
        int ans = 1;

        for(int i = 1; i < n; i++) {
            if(nums[i-1] < nums[i]) {
                Icnt++;
            }
            else {
                Icnt = 1;
            }

            if(nums[i-1] > nums[i]) {
                Dcnt++;
            }
            else {
                Dcnt = 1;
            }

            ans = max(ans, max(Icnt, Dcnt));
        }

        return ans;
    }
};