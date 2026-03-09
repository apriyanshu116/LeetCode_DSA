class Solution {
public:
    string simplifyPath(string path) {
        string token="";
        stringstream ss(path);
        vector<string>vec;
        while(getline(ss,token,'/')){
            if(token=="." || token=="")continue;
            if(token==".."){
                if(!vec.empty()){
                    vec.pop_back();
                }

            }
            else{
                vec.push_back(token);
            }
        }
        string result="";
        if(vec.size()==0)return "/";
        else{
            for(auto &t:vec){
                result=result+"/"+t;

            }
        }
        return result;
        
        
    }
};