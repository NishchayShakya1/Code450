class Solution {
public:
    int partitionString(string s) {
        string ans = "";
        int count = 0;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(ans.find(s[i]) != string::npos){
                count++;
                ans = "";
                ans += s[i];
            }
            else{
                ans += s[i];
            }
        }
        return count+1;
    }
};