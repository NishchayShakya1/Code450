class Solution {
public:
    string truncateSentence(string s, int k) {
//           int count =0;
//         string ans="";
//         for(auto x:s)
//         {
//             if(x==' ')
//                 count++;
//             if(count==k)
//                 break;
//             ans+=x;
//         }
        
//         return ans;
        string a;
        for(auto c:s){
            if(c == ' '){
                k--;
           
            }
             
            
            if(k == 0){
                break;
            }
            a = a + c;
        }
    
        return a;
    }
};