class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>& nums,vector<int>& temp,int n,int i){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        //include
        temp.push_back(nums[i]);
        solve(nums,temp,n,i+1);
        temp.pop_back();//backtrack
        solve(nums,temp,n,i+1);//exclude
        

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        solve(nums,temp,n,0);
        return ans;
        
    }
};