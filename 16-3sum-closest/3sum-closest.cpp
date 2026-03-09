class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         int closesum=nums[0]+nums[1]+nums[2];
         sort(nums.begin(),nums.end());
        for(int k=0;k<=nums.size()-3;k++){
            int i=k+1;
            int j=nums.size()-1;
            while(i<j){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<abs(target-closesum)){
                    closesum=sum;
                }
                if(sum<target){
                    i++;
                }
                else if(sum>target){
                    j--;
                }
                else{
                    return sum;
                }
            }
        }
        return closesum;
        
    }
};