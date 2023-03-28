class Solution {
public:
    string makeFancyString(string s) {
        if(s.size() < 3){
           return s;
        }
        string result;
        result += s[0];
        result += s[1];
        for(int i=2; i<s.size(); i++){
            if(s[i-2] == s[i-1] && s[i-1] == s[i]) continue;
            result += s[i];
        }
       return result; 
    }
};