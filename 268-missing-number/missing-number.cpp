class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int acsum=0;
        for(int i=0;i<=n;i++){
            acsum+=i;

        }
        int arrsum=0;
         for(int i=0;i<n;i++){
            arrsum+=nums[i];

        }
        int ans;
        if(arrsum<acsum){
            ans=acsum-arrsum;

        }
        return ans;

        
    }
};