class Solution {
public:
    bool canReach(vector<int>& s, vector<int>& t) {
        int x = s[0];
        int y = s[1];
        int tx = t[0];
        int ty = t[1];
        if((x == y && tx == ty) || (x+y)%2 == (tx+ty)%2) {
            return true;

        }
        return false;
    }
};