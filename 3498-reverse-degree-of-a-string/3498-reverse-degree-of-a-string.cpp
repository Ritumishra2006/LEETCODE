class Solution {
public:
    int reverseDegree(string s) {
       int cnt = 0;
       for(int i = 1; i <= s.size(); i++) {
        cnt += (26 - (s[i-1] - 'a')) * i;
       } 
       return cnt;
    }
};