class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        set<char>s(sentence.begin(), sentence.end());
        
        return s.size() == 26? true:false;
    }
};