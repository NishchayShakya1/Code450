class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long int res=INT_MIN;
        long long int sum=0;
        for(int i=0 ; i<nums.size() ; i++){
            sum+=nums[i];
            long long int avg=ceil((sum*1.0)/(i+1));
            res=max(res,avg);
        }
        return res;
    }
};