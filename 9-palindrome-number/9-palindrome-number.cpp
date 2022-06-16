class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string rev = string(str.rbegin(), str.rend());
        if(str == rev){
            return true;
        }
        
        return false;
    }
};