class Solution {
public:
    void sortColors(vector<int>& nums) {
       int n=nums.size();
       int red=0;
       int white=0;int blue=0;
       for(int i=0;i<n;i++){
        if(nums[i]==0){
            red++;
        }
         if(nums[i]==1){
            white++;
        }
         if(nums[i]==2){
            blue++;
        }
       }
       int i=0;
       while(red--){
          nums[i++]=0;
       }
        while(white--){
          nums[i++]=1;
       }
        while(blue--){
          nums[i++]=2;
       }
      
        
    }
};