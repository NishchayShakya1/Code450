class Solution {
public:
    int lengthOfLastWord(string s) {
       int count = 0;
       int result = 0;
        
       for(char &c: s) {
            if(c == ' ') {
                count = 0;
                continue;
            } else {
                count++;
            }
            
            result = count;
        }
        
        return result;
    }
};