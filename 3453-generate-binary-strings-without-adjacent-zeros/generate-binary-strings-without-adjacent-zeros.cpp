class Solution {
    public: 
    //initialize a ans vector of string 
    vector<string> ans;
    void solve(int n, string s){
        if (n==0){
            ans.push_back(s);
            return;
        }
        //condition for no adjacent zeros
        if(s.empty() || s.back()=='1'){
            solve(n-1,s+'0');
             solve(n-1,s+'1');
        }
        else
        {
             solve(n-1,s+'1');
        }
    }

    vector<string> validStrings(int n) {
        string s="";
        solve(n,s);
        return ans;  
    }
};