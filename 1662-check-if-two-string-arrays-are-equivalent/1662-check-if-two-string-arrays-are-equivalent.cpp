class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s;
        string a;
        
        for(auto c:word1){
            s += c;
        }
         for(auto c:word2){
            a += c;
        }
        
        return s == a;
    }
};