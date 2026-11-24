class Solution {
public:
    int solve(string& s, int i, int j, vector<vector<int>>& dp) {

        if (i > j) {
            return 0;
        }
        if (i == j) {
            return 1;
        }

        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        if (s[i] == s[j]) {
            return  2 + solve(s, i + 1, j - 1, dp);
        }
            int isp = solve(s, i+1, j, dp);
            int nsp = solve(s, i , j-1, dp);

            return dp[i][j] = max(isp, nsp);
        
    }
    int longestPalindromeSubseq(string s) {

        int n = s.length();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        return solve(s, 0, n - 1, dp);
    }
};