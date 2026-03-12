class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=nums[0];
        int n=nums.size();
        int p=0;
        for(int i=0;i+1<n;i++){
            if(nums[i]>nums[i+1]){
                p=i+1;
                break;
            }

        }
        
        ans=min(ans,nums[p]);
        return min(ans,nums[n-1]);
        
    }
};