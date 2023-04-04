class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, vector<int>> counts;
        for (int i = 0; i < nums.size(); ++i) {
            counts[nums[i]].push_back(i);
        }

        int maxFreq = 0;
        for (auto it = counts.begin(); it != counts.end(); ++it) {
            maxFreq = max(maxFreq, (int)it->second.size());
        }

        int subLen = nums.size();
        for (auto it = counts.begin(); it != counts.end(); ++it) {
            if (it->second.size() == maxFreq) {
                subLen = min(subLen, it->second.back() - it->second[0] + 1);
            }
        }

        return subLen;
    }
};