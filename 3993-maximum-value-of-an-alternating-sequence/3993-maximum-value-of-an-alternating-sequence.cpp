class Solution {
public:
    long long maximumValue(long long n, long long s, long long m) {
        if(n == 1) {
            return s;
        }
        return s+m*(n/2)+(-1*(n/2-1));
    }
};