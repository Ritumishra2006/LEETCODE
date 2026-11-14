class Solution {
public:
    int mySqrt(int x) {
       long long i;
        while(i*i <= x) {
            i+=1;
        }
        return i-1;
    }
};