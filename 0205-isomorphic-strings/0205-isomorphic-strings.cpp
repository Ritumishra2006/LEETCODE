class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        if(s.length() != t.length()) {
            return false;
        }
        for(int i = 0; i < s.length(); i++) {
            char a = s[i];
            char b = t[i];

            if(mp1.count(a) != 0 && mp1[a] != b) {
                return false;
            }
            if(mp2.count(b) != 0 && mp2[b] != a) {
                return false;
            }
            mp1[a] = b;
            mp2[b] = a;
        }
        
      
        return true;
    }
};