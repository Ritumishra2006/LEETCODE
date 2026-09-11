class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        set<int> st;
        int num;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {

                    if (i == j || j == k || i == k)
                        continue;

                    if (digits[i] == 0)
                        continue;

                    num = (digits[i] * 100) + (digits[j] * 10) + digits[k];

                    if (num % 2 == 0)
                    st.insert(num);
                }
            }
        }
        return st.size();
    }
};

