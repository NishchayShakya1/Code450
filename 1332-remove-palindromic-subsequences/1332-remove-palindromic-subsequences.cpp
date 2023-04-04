class Solution {
public:
    bool ispalind(string& s)
    {
        int i = 0, j = s.size()-1;
        while(i<=j)
        {
            if(s[i++] != s[j--])return 0;
        }
        return 1;
    }
    int removePalindromeSub(string s)
    {
        if(ispalind(s))return 1;
        unordered_map<char, int>mp;
        for(int i = 0; i<s.size(); i++)
            mp[s[i]]++;
        return mp.size();        
    }
};