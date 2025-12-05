class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=haystack.find(needle);
         if(index <haystack.size()){
            return index;
         }
        
        else{
            return -1;
        }
        
    }
};