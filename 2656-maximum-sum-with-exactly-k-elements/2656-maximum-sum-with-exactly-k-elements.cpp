class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int m = *max_element(nums.begin(), nums.end());
        int sum = m;
        for(int i=1; i<k; i++){
            sum = sum + ++m;
        }
        
        return sum;
    }
};