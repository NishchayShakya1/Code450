class SmallestInfiniteSet {
public:
    
    set<int>ans;
    SmallestInfiniteSet() {
        ans.clear();
        for(int i=1; i<=1000; i++){
            ans.insert(i);
        }
    }
    
    int popSmallest() {
        int res = *ans.begin();
        ans.erase(ans.begin());
        return res;
    }
    
    void addBack(int num) {
        ans.insert(num);
    }
//      set<int>st;
//     SmallestInfiniteSet() {
//         st.clear();
//         for(int i=1;i<=1000;i++){
//             st.insert(i);
//         }
//     }
    
//     int popSmallest() {
//         int t = *st.begin();
//         st.erase(st.begin());
//         return t;
//     }
    
//     void addBack(int num) {
//         st.insert(num);
//     }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */