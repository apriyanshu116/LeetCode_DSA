class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int j=1,k=0,i=0;
        while(i<n){
            if(nums[i]>0){
                ans[k]=nums[i];
                k+=2;
            }
            if(nums[i]<0){
                ans[j]=nums[i];
                j+=2;
            }
            i++;
        }
        return ans;
        
    }
};