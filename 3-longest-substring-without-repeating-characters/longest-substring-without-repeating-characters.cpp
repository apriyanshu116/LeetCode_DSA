class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> copy;//for unique element 
        //using sliding window
        int l=0,maxl=0;
        for(int r=0;r<s.length();r++){
            while(copy.count(s[r])){
                copy.erase(s[l]); 
                l++;
            }
            copy.insert(s[r]);
            maxl=max(maxl,r-l+1);
        }
        return maxl;

        
    }
};