class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int max_area = 0;
        int curr_area = 1;
        int h = 0 , w = 0;
        while(i < j) {
            h = min(height[i], height[j]);
            w = j-i;
            curr_area = w*h;
            max_area = max(max_area, curr_area);
            if(height[i] < height[j]){
                i++;
            } else {
                j--;
            }
        }
        return max_area;
    }
};