class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int l = 0, r = n-1, k = n-1;
        while(l <= r) {
           int Lsq = nums[l]*nums[l];
           int Rsq = nums[r]*nums[r];
            if(Lsq > Rsq) {
                res[k] = Lsq;
                k--;
                l++;
            } else {
                res[k] = Rsq;
                k--;
                r--;
            }
        }
        return res;
    }
};