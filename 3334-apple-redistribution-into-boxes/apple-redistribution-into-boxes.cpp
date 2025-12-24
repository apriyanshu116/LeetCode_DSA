class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n=apple.size();
        int m=capacity.size();
        int asum=0,csum=0;
        for(int i=0;i<n;i++){
            asum+=apple[i];
        }
        int ans=0;
        sort(capacity.begin(),capacity.end());
        for(int i=m-1;i>=0;i--){
            csum+=capacity[i];
            ans++;
            if(csum>=asum){
                return ans;
                break;
            }

        }
        return ans;
        
    }
};