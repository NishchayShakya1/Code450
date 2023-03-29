class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        string sol="";
        for(int i=0; i<nums.size(); i++){
            sol = to_string(nums[i]);
            if(sol.size()%2 == 0){
                count++;
            }
        }
        
        return count;
    }
};