class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans(n,-1);
        stack<int>s;
        for(int i=2*n-1;i>=0;i--){
            int curr=nums[i%n];
            while(!s.empty() && nums[s.top()]<=curr){
                s.pop();
            }
            if (i < n) {
                ans[i] = s.empty() ? -1 : nums[s.top()];
            }

            // Push current index
            s.push(i % n);
        }
           
        return ans;
        
    }
};