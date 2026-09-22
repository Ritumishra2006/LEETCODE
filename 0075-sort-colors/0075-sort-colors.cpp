class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                cnt0++;
            } else if(nums[i] == 1) {
                cnt1++;
            } else {
                cnt2++;
            }
            }
            int idx = 0;
            while(cnt0 > 0) {
                nums[idx] = 0;
                cnt0--;
                idx++;
            }
        
            while(cnt1 > 0) {
                nums[idx] = 1;
                cnt1--;
                idx++;
            }
            while(cnt2 > 0) {
                nums[idx] = 2;
                cnt2--;
                idx++;
            }
        }
    
};