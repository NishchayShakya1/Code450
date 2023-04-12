class Solution {
public:
    string simplifyPath(string path) {
        string ans;
        stack<string>sol;
        
        for(int i=0; i<path.size(); i++){
            
            if(path[i] == '/'){
                continue;
            }
            
            string s;
            while(i<path.size() && path[i] != '/'){
                s += path[i];
                ++i;
            }
            
            if(s == "."){
                continue;
            }
            else if(s == ".."){
                if(!sol.empty()){
                   sol.pop(); 
                }
            }
            else{
                sol.push(s);
            }
            
            }
        
        while(!sol.empty()){
            ans = "/" + sol.top() + ans;
            sol.pop();
        }
        
        if(ans.size() == 0){
            return "/";
        }
        
        return ans;
        
    }
};