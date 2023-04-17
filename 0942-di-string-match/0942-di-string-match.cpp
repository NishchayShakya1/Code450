class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> res;
        for (int l = 0, h = s.size(), i = 0; i <= s.size(); ++i) {
            res.push_back(s[i] == 'I' ? l++ : h--);
        }
        return res;
    }
};