class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int p=0;
        for(int i=0;i+1<n;i++){

            if(nums[i]>nums[i+1]){
                p=i+1;
                break;
            }
        }
        int s=0;
        int e=p-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target)return true;
            if(nums[mid]>target)e=mid-1;
            else{
                s=mid+1;
            }
        }
        int st=p;
        int en=n-1;
        while(st<=en){
            int mid=st+(en-st)/2;
            if(nums[mid]==target)return true;
            if(nums[mid]>target)en=mid-1;
            else{
                st=mid+1;
            }
        }
        return false;
        
    }
};