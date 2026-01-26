class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        int n=nums.size();
        int mindiff=INT_MAX;
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i+1<n;i++){
            mindiff=min(mindiff,nums[i+1]-nums[i]);
        }
        for(int i=0;i+1<n;i++){
            if(nums[i+1]-nums[i]==mindiff){
                ans.push_back({nums[i],nums[i+1]});
            }
        }
        return ans;

        
    }
};