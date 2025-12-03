    class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int n=nums.size();
            vector<int> ans(2,-1);
            if(n==0){
            
                return ans;


            }
            int s=0,e=n-1;
            while(s<=e){
                int mid=s+(e-s)/2;
                if(nums[mid]>=target){
                    e=mid-1;
                 }
            
                else{
                    s=mid+1;
                     }
            }
            if(s<n && nums[s]==target)ans[0]=s;
            else return ans;
            e=n-1;
            while(s<=e){
                int mid=s+(e-s)/2;
                if(nums[mid]<=target)s=mid+1;
                else e=mid-1;
            }
            ans[1]=e;
        return ans;
            
        }
    };