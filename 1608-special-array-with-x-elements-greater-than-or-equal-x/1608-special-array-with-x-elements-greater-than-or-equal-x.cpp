class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        for(int i=0; i<=n; i++) {
            int low = -1, high = n, mid;
            while(low + 1 < high) {
                mid = low + (high - low)/2;
                if(nums[mid] < i)
                    low = mid;
                else
                    high = mid;
            }
            if(high != n && n - low - 1 == i)
                return i;
        }
        return -1;
    }
};