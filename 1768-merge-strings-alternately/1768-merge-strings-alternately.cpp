class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string ans;
        int len1 = word1.size();
        int len2 = word2.size();
        int high = max(len1, len2);
        for(int i=1; i<=high; i++){
            
            if(i <= word1.size()){
                ans += word1[i-1];
            }
            if(i <= word2.size()){
                ans += word2[i-1];
            }
        }
        
        return ans;
    }
};