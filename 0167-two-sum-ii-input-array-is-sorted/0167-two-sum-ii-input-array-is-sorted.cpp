class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int left = 0;
        int right = n.size()-1;
        while(left < right) {
            if(n[left] + n[right] == target) {
                return {left+1, right+1};
            } else if (n[left] + n[right] < target) {
                left++;
            } else  {
                right--;
            }
        }
        return {};
    }
};