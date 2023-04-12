class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i=0; i<command.size();){
            if(command[i] == '(' && command[i+1] == ')'){
                ans+= "o";
                i = i+2;
            }
            else if(command[i] == '(' && command[i+3] == ')'){
                ans += "al";
                i = i+4;
            }
            else{
                ans += "G";
                i++;
            }
        }
        
        return ans;
    }
};