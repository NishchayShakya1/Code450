class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
      int ans = 0;
      unordered_map<char, set<int>> m;
      for (int i = 0; i < s.size(); i++)
        m[s[i]].insert(i);
      for (const auto& word : words) {
        int i = 0, j = -1;
        for (i = 0; i < word.size(); i++) {
          if (!m.count(word[i]))
            break;
          auto iter = m[word[i]].upper_bound(j);
          if (iter == m[word[i]].end())
            break;
          j = *iter;
        }
        if (i == word.size())
          ans++;
      }
      return ans;
    }
};