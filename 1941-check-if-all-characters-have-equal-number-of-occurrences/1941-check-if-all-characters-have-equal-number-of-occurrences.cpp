class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int>mp;
        for(auto c:s){
            mp[c]++;
        }
        
        set<int>ans;
        for(auto it: mp){
            ans.insert(it.second);
        }
        
        return ans.size() == 1;
    }
};