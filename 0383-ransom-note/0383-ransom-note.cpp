class Solution {
public:
    bool canConstruct(string r, string m) {
        sort(r.begin(), r.end());
        sort(m.begin(), m.end());
        int n = r.length();
        int k = m.length();
        int i = 0, j = 0;
        while(i < n && j < k) {
            if(r[i] == m[j]) {
                i++;
                j++;
            }
                
           else if(r[i] > m[j]) {
                j++;
             }
             else {
             return false;
             }
        }
       return i==n;
    }
};