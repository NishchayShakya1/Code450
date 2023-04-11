class Solution {
public:
    bool judgeCircle(string moves) {
        int sum = 0;
        for(auto c: moves){
            if(c == 'U'){
                sum += 2;
            }
            else if(c == 'D'){
                sum += -2;
            }
            else if(c == 'L'){
                sum += -3;
            }
            else if(c == 'R'){
                sum += 3;
            }
        }
        
        return sum == 0;
    }
};