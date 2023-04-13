class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>sol;
        int j =0;
        for(int i=0; i<pushed.size(); i++){
            sol.push(pushed[i]);
            while(!sol.empty() && sol.top() == popped[j]){
                sol.pop();
                j++;
            }
        }
        
        return sol.empty();
    }
};