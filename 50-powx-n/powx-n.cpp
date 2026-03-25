class Solution {
public:
   double solve (double x,long long n){
    if (n==0)return 1;
    double res=solve(x,n/2);
    return (n%2==0)?res*res:x*res*res;
   }
    double myPow(double x, int n) {
        if(n==0)return 1;
        long long N=n;
        if(N<0){
            x=1/x;
            N=N*(-1.0);
        }
            return pow(x,N);
        
    }
};