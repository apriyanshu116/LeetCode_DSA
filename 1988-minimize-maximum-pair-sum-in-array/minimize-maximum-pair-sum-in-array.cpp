class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=INT_MIN;
        int s=0;
        int e=n-1;
        while(s<e){
            ans=max(ans,nums[s++]+nums[e--]);
        }
        return ans;

        
    }
};