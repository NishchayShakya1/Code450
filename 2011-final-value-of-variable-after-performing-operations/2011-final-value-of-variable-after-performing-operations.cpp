class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(auto c: operations){
            if(c == "++X" || c == "X++"){
                ++x;
            }
            else{
                --x;
            }
        }
        
        return x;
    }
};