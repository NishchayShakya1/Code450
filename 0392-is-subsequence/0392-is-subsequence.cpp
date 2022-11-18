class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool ans = false;
        int j=0;
        int len = s.length();
        for(int i=0; i<t.length(); i++){
               if(t[i]==s[j]){
                j++;
            }
        }
        
        if(j==len){
            ans = true;
        }
        
        return ans;
    }
};