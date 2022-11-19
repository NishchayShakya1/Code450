class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<long long>v;
        long long sum =0;
        bool ans = false;
        for(int i=1; i<num; i++){
            if(num%i == 0){
                v.push_back(i);
            }    
        }
        
        for(int i=0; i<v.size(); i++){
            sum += v[i];
        }
        
        if(sum == num){
            ans = true;
        }
        
        return ans;
    }
};