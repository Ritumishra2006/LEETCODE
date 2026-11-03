class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int tar = nums[n-1];
        int moves = 0;
        for(int i = 0; i < n; i++) {
            moves += (tar - nums[i]);
        }
        return moves;
    }
};