class Solution {
public:
    bool isAlphanumeric(char c)
    {
       if( (48<=c && c<=57) || (65<=c && c<=90) || (97<=c && c<=122)) {
           return true;
       }
       return false;
    }
     
    bool isPalindrome(string s) {
       
        string result;
        for(char c : s){
            if(isAlphanumeric(c)){
                result += tolower(c);
            }
        }
        
        string reversed = result;
        reverse(reversed.begin(), reversed.end());
        
        if(result == reversed) return true;
        
        return false;
    }
};