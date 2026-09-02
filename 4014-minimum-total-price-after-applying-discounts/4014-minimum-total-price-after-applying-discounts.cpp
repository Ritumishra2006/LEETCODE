class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end(), greater<int>());
        sort(discounts.begin(), discounts.end(), greater<int>());
        int n = prices.size();
        int m = discounts.size();

        double total = 0;
        int p = 0, d = 0;
        while(p < n && d < m) {
            
            total += prices[p] * (100.0 - discounts[d])/ 100.0;
            p++;
            d++;
        }
             while(p < n) {
                total +=  prices[p];
                p++;
            }
 return total;
    }
};