class Solution {
public:
    string defangIPaddr(string address) {
        string sol = "";
        for(int i=0; i<address.size(); i++){
            if(address[i] == '.'){
                sol+= "[.]";
            }
            else{
                sol += address[i];
            }
        }
        return sol;
    }
};