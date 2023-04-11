class Solution {
public:
    string removeStars(string s) {
        
        string ans;
        int j = 0;
        while(j<s.size()){
            if(s[j] == '*'){
                ans.pop_back();
            }
            else{
                ans.push_back(s[j]);
            }
            j++;
        }
        
        return ans;
     
    }
};