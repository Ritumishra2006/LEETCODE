class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;
    while(s.length()+1 == t.length()){
         for(char c : t) {
            mp[c]++;
         }
         for(char c : s) {
            mp[c]--;
         }
    for(auto it : mp) {
        if(it.second > 0) {
            return it.first;
        }
    } 
    }
    return ' ';
    
    }
};