class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& s1, vector<vector<int>>& s2) {
        vector<vector<int>> ans;
        int n = s1.size();
        int m = s2.size();
        int i = 0, j = 0;
        while(i < n && j < m) {
            int t1 = s1[i][0];
            int t2 = s2[j][0];
            int v1 = s1[i][1];
            int v2 = s2[j][1];

            if(t1 == t2) {
              ans.push_back({t1, v1+v2});
              i++;
              j++;
            } 
            else if(t1 < t2) {
                ans.push_back({t1, v1+v2});
                i++;
            }
            else if(t1 > t2) {
                ans.push_back({t2, v1+v2});
                j++;
            }
        }
        while(i < n) {
            ans.push_back({s1[i][0], s1[i][1]});
            i++;
        }
        while(j < m) {
            ans.push_back({s2[j][0], s2[j][1]});
            j++;
        }
        return ans;
    }
};