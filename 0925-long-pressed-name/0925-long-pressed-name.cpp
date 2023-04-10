class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j=0;
        for(int x=0; x<typed.size(); x++){
            
            
           
            if(name[i]==typed[x]){
                i++;
            }
            
            else if(i == name.size() && name[i-1] != typed[x]){
                j++;
            }
            else if (!(i > 0 && name[i - 1] == typed[x])) {
                return false;
            }
           
           
           
        }
        
        return j == 0 && i == name.size();
         // int i =0;
         // for (auto c : typed) i += name[i] == c;
         // return i == name.size();
    }
};