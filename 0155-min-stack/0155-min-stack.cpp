class MinStack {
public:
     stack<int> st1,st2;
    void push(int val) {
        if(st1.empty()){st1.push(val);st2.push(val);return ;}
        st1.push(val); st2.push(min(val,st2.top()));
    }
    void pop() {
        if(st1.empty()){return ;}
        st1.pop();st2.pop();
    }
    int top(){ return st1.top();}
    int getMin(){ return st2.top();}
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */