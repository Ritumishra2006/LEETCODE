class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, prod = 1;
        int diff;
        int num = n;
        while(num != 0) {
            int dig = num%10;
            sum += dig;
            prod *= dig;
            diff = (prod-sum);
            num/=10;
        }
        return diff;
    }
};