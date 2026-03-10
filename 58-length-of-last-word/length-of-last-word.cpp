class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int i;
        for( i=n-1;i>=0;i--){
            if(s[i]==' ')continue;
            else break;
        }int j=i;
        while(i>=0 && s[i]!=' '){
            i--;
        }
        return j-i;
        
    }
};