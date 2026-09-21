class Solution {
public:
    int countDigits(int n) {
        int cnt = 0;
        int num = n;
        while(num != 0) {
        int dig = num%10;
        if(n%dig == 0) {
            cnt++;
        }
        num/=10;
        }
        return cnt;
    }
};