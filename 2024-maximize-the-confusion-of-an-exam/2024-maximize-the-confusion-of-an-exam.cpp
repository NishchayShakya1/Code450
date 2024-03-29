class Solution {
int count(string &s, int k, char c) {
        int N = s.size(), cnt = 0, i = 0, j = 0;
        for (; j < N; ++j) {
            cnt += s[j] == c;
            if (cnt > k) cnt -= s[i++] == c; // If `cnt > k` we shift the window.
        }
        return j - i;
    }
public:
    int maxConsecutiveAnswers(string s, int k) {
        return max(count(s, k, 'T'), count(s, k, 'F'));
    }
};