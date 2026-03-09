class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int idx=n-1;
        for(int i=0;i+1<n;i++){
            if(nums[i]>nums[i+1])idx=i+1;
        }
        int s=0;
        int e=idx-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(target==nums[mid])return mid;
            if(target<nums[mid])e=mid-1;
            else s=mid+1;
        }
        int st=idx;
        int en=n-1;
        while(st<=en){
            int mid=st+(en-st)/2;
            if(target==nums[mid])return mid;
            if(target<nums[mid])en=mid-1;
            else st=mid+1;
        }
        return -1;
    }
};