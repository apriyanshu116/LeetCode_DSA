class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> freq(26,0);
       int j = s.size();
       //count freq of characters increment
        for (int i = 0; i < j; i++) {
            freq[s[i] - 'a']++;
        }
       //count freq decrement
        for (int i = 0; i < t.size(); i++) {
            freq[t[i] - 'a']--;
        }

        // now which have extra 1 freq that is ans 
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return i + 'a';
            }
        }

     return ' '; 
    }
};