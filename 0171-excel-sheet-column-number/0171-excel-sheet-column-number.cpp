class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(auto c: columnTitle){
            int d = c - 'A';
            result = result*26 + d +1;
        }
        
        return result;
    }
};