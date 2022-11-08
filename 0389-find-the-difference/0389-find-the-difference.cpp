class Solution {
public:
    char findTheDifference(string s, string t) {  
        
         int sum = 0;
         for(int i=0; i<t.size(); i++){
             sum += t[i];
             sum -= s[i];
         }
        
         return sum;
    }
};