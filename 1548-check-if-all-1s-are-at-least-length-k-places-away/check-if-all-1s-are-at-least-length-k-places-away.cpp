class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        if(nums.size()==0)return true;
        int j,i=0,len=0;
        while(i<nums.size() && nums[i]!=1){
            i++;
        }
        j=i+1;
        while(j<nums.size()){
            if(nums[j]!=1){
                j++;
                len++;
            }
            else if(nums[j]==1 && len>=k){
                i=j;
                j++;
                len=0;
                

            }
            else {
                return false;
            }
        }
        return true;
    }
};