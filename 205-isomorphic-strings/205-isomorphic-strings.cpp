class Solution {
public:    
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
             return false;
        }
         
        map<char,char>charmap;
        map<char,char>charmap1;
        
        for(int i=0; i<s.length(); i++){
            
            if(!charmap[s[i]]){
                charmap[s[i]] = t[i];
            }
            
            else{
                
                if(charmap[s[i]] != t[i]){
                   return false; 
                }
            }
        }
        
        for(int i=0; i<t.length(); i++){
            
            if(!charmap1[t[i]]){
                charmap1[t[i]] = s[i];
            }
            
            else{
                
                if(charmap1[t[i]] != s[i]){
                   return false; 
                }
            }
        }
        
        return true;
    }
};