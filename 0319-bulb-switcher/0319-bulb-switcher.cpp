class Solution {
public:
   
    // void toggle(vector<int>&v, int n, int k){
    //     for(int i=0; i<n; i+k+1){
    //         if(v[i] == 0){
    //             v[i] = 1;
    //         }
    //         else{
    //             v[i] = 0;
    //         }
    //     }
    // }
    
    int bulbSwitch(int n) {
          long long i=1;
        int ct=0;
        while((i*i)<=n){
            i++;
            ct++;
        }
        return ct;
//          vector<int>v(n,0);   
//          for(int i=0; i<n; i++){
//              toggle(v, n, i);
//          }   
        
//         return count(v.begin(), v.end(), 1);
    }
};