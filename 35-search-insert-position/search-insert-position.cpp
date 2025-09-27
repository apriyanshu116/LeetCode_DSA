class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        
        int s=0;
        int e=n-1;
        if(target>nums[e] )return (e+1);
        if(target<=nums[s])return s;
        int ans;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target ){
                ans= mid;
                
                break;
            }
            if(target>nums[mid]){
                s=mid+1;
               // ans=mid;
            }
            if(target<nums[mid]){
                ans=mid;
                e=mid-1;
            }
        }
       
        return ans;
    }
};