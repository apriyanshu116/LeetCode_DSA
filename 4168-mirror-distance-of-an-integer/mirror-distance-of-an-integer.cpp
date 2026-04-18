class Solution {
public:
    int mirrorDistance(int n) {
        int nn=n;
        int m=0;
        while(n>0){
            int dig=n%10;
            m=m*10+dig;
            n=n/10;
        }
        return abs(nn-m);
        
    }
};