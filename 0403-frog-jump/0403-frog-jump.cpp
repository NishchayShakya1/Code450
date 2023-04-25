class Solution {
public:
    
       bool dfs(int i, int k, int n, vector<int> &stones, unordered_map<int, int> &m, map<pair<int, int>, bool> &dp) {
        if(i >= n - 1) return true;
        if(dp.find({i, k}) != dp.end()) return dp[{i, k}];

        if(k - 1 > 0 && m.find(stones[i] + k - 1) != m.end()) {
            if(dfs(m[stones[i] + k - 1], k - 1, n, stones, m, dp)) return dp[{i, k}] = 1;
        }
        if(k > 0 && m.find(stones[i] + k) != m.end()) {
            if(dfs(m[stones[i] + k], k, n, stones, m, dp)) return dp[{i, k}] = 1;
        }
        if(m.find(stones[i] + k + 1) != m.end()) {
            if(dfs(m[stones[i] + k + 1], k + 1, n, stones, m, dp)) return dp[{i, k}] = 1;
        }
        return dp[{i, k}] = 0;
    }
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        unordered_map<int, int> m;
        for(int i=0; i<n; i++) m[stones[i]] = i;
        
        map<pair<int, int>, bool> dp;
        return dfs(0, 0, n, stones, m, dp);
    }
};