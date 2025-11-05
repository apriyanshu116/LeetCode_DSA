class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        vector<int>copy;
        copy.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                 copy.push_back(nums[i]);
            }


        }
        for(int a=0;a<copy.size();a++){
            nums[a]=copy[a];
        }
        return copy.size();
        
    }
};