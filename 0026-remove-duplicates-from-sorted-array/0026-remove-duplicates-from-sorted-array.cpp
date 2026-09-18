class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        // if(n == 0) {
        //     return 0;
        // }

        // vector<int> ans;
        // ans.push_back(nums[0]);

        // for(int i = 1; i < n; i++) {
        //     if(nums[i] != nums[i - 1]) {
        //         ans.push_back(nums[i]);
        //     }
        // }

        // return ans.size();

        int i = 0; 
        for(int j = 1; j < n; j++) {
            if(nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};