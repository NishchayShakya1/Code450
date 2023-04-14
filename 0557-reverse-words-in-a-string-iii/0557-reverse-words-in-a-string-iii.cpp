class Solution {
public:
    string reverseWords(string s) {
        s+= ' ';
          string t;
        string ans;
        for(auto c:s){
            if(c != ' '){
               t += c;
            }
            else if(c == ' '){
                reverse(t.begin(), t.end());
                ans = ans + t + ' ';
                t = "";
            }
            
        }
        ans.pop_back();
        return ans;
    }
};