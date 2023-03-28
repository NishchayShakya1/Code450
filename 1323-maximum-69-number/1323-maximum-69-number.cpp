class Solution {
public:
    int maximum69Number (int num) {
         string stri = to_string(num);
         for(int i=0; i<stri.size(); i++){
             if(stri[i] == '6'){
                 stri[i] = '9';
                 break;
             }
         }
        
         num = stoi(stri);
         return num;
    }
};