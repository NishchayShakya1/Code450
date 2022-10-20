class Solution {
public:
    string addStrings(string num1, string num2) {
        
       int i=num1.size()-1, j=num2.size()-1;
        string ans;
        int sum =0;
        while(i>=0||j>=0||sum){
            sum += i>=0? num1[i--]-'0':0;
            sum += j>=0? num2[j--]-'0':0;
            ans = char(sum%10+'0')+ans;
            sum /=10;
        }
        return ans;
        
        
    }
};