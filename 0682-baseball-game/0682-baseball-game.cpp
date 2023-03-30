class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        vector<int>sol;
        for(int i=0; i<operations.size(); i++){
            if(operations[i] == "+"){
                sol.push_back(sol[sol.size()-1]+ sol[sol.size()-2]);
            }
            else if(operations[i] == "C"){
                sol.pop_back(); 
            }
            else if(operations[i] == "D"){
              
                sol.push_back(sol[sol.size()-1]*2);
            }
            else{
                sol.push_back(stoi(operations[i]));
            }
        }
        
        for(int i=0; i<sol.size(); i++){
            sum += sol[i];
        }
        
        return sum;
    }
};