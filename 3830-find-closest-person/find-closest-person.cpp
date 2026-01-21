class Solution {
public:
    int findClosest(int x, int y, int z) {
        // min  difference between |z-x| and |z-y| is ans  ,when both equal then ans is zero 
        int dx=abs(x-z);
        int dy=abs(y-z);
        if(dx==dy)return 0;
        else if(dx<dy)return 1;
        else return 2;
        
    }
};