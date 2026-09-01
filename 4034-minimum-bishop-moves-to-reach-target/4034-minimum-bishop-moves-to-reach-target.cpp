class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int sr = source[0];
        int sc = source[1];
        int tr = target[0];
        int tc = target[1];
        if(sr == tr && sc == tc) {
            return 0;
        } else if(abs(tr-sr) == abs(tc-sc)) {
            return 1;
        } else if((tr+tc)%2 == (sc+sr)%2) {
            return 2;
        }
        return -1;
    }
};