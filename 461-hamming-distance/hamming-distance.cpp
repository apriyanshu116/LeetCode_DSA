class Solution {
    

public:
    int hammingDistance(int x, int y) {
        if(x==0 && y==0)return 0;
        int count=0;
        
     while(x!=0 || y!=0){
        int lsb1=x&1;
        int lsb2=y&1;
        if(lsb1!=lsb2){
            count++;
        }
       x= x>>1;
        y=y>>1;
     }
     return count;
        
    }
};