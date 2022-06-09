class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>result;
        // int sum = 0;
        int left = 0;
        int right = numbers.size()-1;
        
        while(numbers[left] + numbers[right] != target){
            if (numbers[left] + numbers[right] < target) left++;
		    else right--;
        }
        
        result.push_back(left+1);
        result.push_back(right+1);
        
       return result;
    }
};