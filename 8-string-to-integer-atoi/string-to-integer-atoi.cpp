class Solution {
public:
    int myAtoi(string s) {
       int n=s.size();
       int i=0;
       long long ans=0;
       int sign=1;
       //check the if there are spaces
       while(i<n && s[i]==' '){
        i++;
       }
       //check signs 
        if(i<n &&( s[i]=='-' || s[i]=='+')){
            if(s[i]=='-')sign=-1;
            i++;
        }
        //digit conversion
        while(i<n && isdigit(s[i])){
            ans=ans*10+(s[i]-'0');
            if(sign*ans>=INT_MAX)return INT_MAX;
            if(sign*ans<=INT_MIN)return INT_MIN;
            i++;
        }
        return sign*ans;
    }
};