class Solution {
public:
    int minimumSum(int num) {
         int d[4] = {};
        for (int i = 0; i < 4; ++i, num /= 10) d[i] = num % 10;
        sort(begin(d), end(d));
        
        return 10 * (d[0] + d[1]) + d[2] + d[3];
    }
};