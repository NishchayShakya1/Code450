class Solution {
public:
    int minTimeToType(string word) {
        int sec =0;
        for(int i=0; i<word.size(); i++){
            if(i==0){
            sec += min(abs(word[i]-'a'), 26-abs(word[i]-'a')) + 1;
            }
            else{
                sec += min(abs(word[i]-word[i-1]), 26 - abs(word[i]-word[i-1])) + 1;
            }
        }
        
        return sec;
    }
};