class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int>ans(size, -1);
        int len = 2 * k + 1;
        if(k==0){
            return nums;
        }
        if(k>nums.size()-1){
            return ans;
        }
        if(nums.size()<len){
            return ans;
        }    
        
        vector<long>sum(size + 1);
        for (int i = 0; i < size; ++i) sum[i + 1] = sum[i] + nums[i];
        for (int i = k; i + k < size; ++i) ans[i] = (sum[i + k + 1] - sum[i - k]) / len;
        return ans;
    }
};