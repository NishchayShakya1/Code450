class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string ans;
        for(auto c : s){
            if(c == '('){
                if(cnt++){
                    ans += '(';
                }
            }
            else{
                if(--cnt){
                    ans += ')';
                
                }
            }
        }
        
        return ans;
    }
};