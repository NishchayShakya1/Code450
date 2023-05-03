class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count = 0;
        // auto it = find(nums.begin(), nums.end(), 0);
        // if (it != nums.end()){
        //   return 0;
        // }
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                return 0;
                break;
            }
            else if(nums[i]<0){
                count++;
            }
        }
        
        return count%2 == 0 ? 1:-1;
        
        
    }
};