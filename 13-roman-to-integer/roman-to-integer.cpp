class Solution {
    int number(char c){
        if(c=='I')return 1;
         if(c=='V')return 5;
          if(c=='X')return 10;
           if(c=='L')return 50;
            if(c=='C')return 100;
             if(c=='D')return 500;
              if(c=='M')return 1000;
              return 0;
    }
public:
    int romanToInt(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(i + 1 < s.size() && number(s[i]) < number(s[i+1])){
                ans-=number(s[i]);

            }
            else{
                ans+=number(s[i]);
            }
        }
        return ans;
        
    }
};