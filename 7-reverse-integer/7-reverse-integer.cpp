class Solution {
public:
    int reverse(int x) {
//         string s = to_string(x);
//         string rev;
//         string minus = "-";
//         int n = s.length();
//         int result;
//         if(x > INT_MAX/10 || x < INT_MIN/10) {
//                 return 0;
//             }
//         if(s[0] == '-'){
//           for (int i = n - 1; i >= 1; i--){
//              rev.push_back(s[i]);
//           }
//           rev = minus+rev;
//           stringstream(rev) >> result;
//           // result = stoi(rev);
//         }
//         else{
//             for (int i = n - 1; i >= 0; i--){
//               rev.push_back(s[i]);
//             }
//             stringstream(rev) >> result;
//             // result = stoi(rev);
//         }
        
       
        
//         return result;
           long long res = 0;
        while(x) {
            res = res*10 + x%10;
            x /= 10;
        }
        return (res<INT_MIN || res>INT_MAX) ? 0 : res;
       
    }
};