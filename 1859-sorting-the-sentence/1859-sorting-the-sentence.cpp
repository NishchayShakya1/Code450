class Solution {
public:
   string sortSentence(string s) {
        vector<string> sword(200);
        string word;
        for(auto x:s){
            if(x==' '){
                word="";
            }else if(isdigit(x)){
                word+=" ";
                sword[x-47]=word;
            }
            else{
                word+=x;
            }
        }
        string ans;
        for(auto x:sword){
            ans+=x;
        }
        return ans.erase(ans.size()-1);
    }
};