class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.empty())return 0;
       sort(nums.begin(),nums.end());
       int ans=1,c=1;
       for(int i=1;i<nums.size();i++){
            if (nums[i]==nums[i-1])continue;
            if( (nums[i]==nums[i-1]+1)){
                c++;
                ans=max(ans,c);
            }
            else{
                c=1;
            }

        }
        return ans;
        
    }
};