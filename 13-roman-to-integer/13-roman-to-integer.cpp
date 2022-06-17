class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        for(int i=0; i<s.length();){
            if(s[i] == 'I'){
                if(s[i+1] == 'V'){
                    result += 4;
                    i = i+2;
                }
                else if(s[i+1] == 'X'){
                    result += 9;
                    i = i+2;
                }
                else{
                    result += 1;
                    i = i+1;
                }
            }
            
            if(s[i] == 'V'){
                result += 5; 
                i = i+1;
            }
            
            if(s[i] == 'X'){
                if(s[i+1] == 'L'){
                    result += 40;
                    i = i+2;
                }
                else if(s[i+1] == 'C'){
                    result += 90;
                    i = i+2;
                }
                else{
                    result += 10;
                    i = i+1;
                }
            }
            
            if(s[i] == 'L'){
                result += 50; 
                i = i+1;
            }
            
            if(s[i] == 'C'){
                if(s[i+1] == 'D'){
                    result += 400;
                    i = i+2;
                }
                else if(s[i+1] == 'M'){
                    result += 900;
                    i = i+2;
                }
                else{
                    result += 100;
                    i = i+1;
                }
            }
            
            if(s[i] == 'D'){
                result += 500; 
                i = i+1;
            }
            
            if(s[i] == 'M'){
                result += 1000; 
                i = i+1;
            }
            
        }
        
        return result;
    }
};