class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char>mp;
        char temp  = 'a';
        for(int i = 0; i < key.length(); i++) {
            if(key[i] != ' ' && mp.find(key[i]) == mp.end()) {
                mp[key[i]] = temp;
                temp++;
            }
            
        }
        
        string res = "";
        
        for(int i = 0; i < message.length(); i++) {
            if(message[i] != ' ') {
                res+= mp[message[i]];
            }
            else {
                res+= " ";
            }
        }
        
        return res;
    }
};