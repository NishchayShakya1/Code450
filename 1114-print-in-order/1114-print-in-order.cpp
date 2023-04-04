class Foo {
private:
    
    std::mutex m;
    int stage;
    
    void run(int step, function<void()> fun) {
        bool done = false;
        while (!done) {
            m.lock();
            if (stage >= step) {
                stage += 1;
                fun();
                done = true;
            }
            m.unlock();
        }
    }
    
public:
    
    Foo() {
        stage = 0;
    }

    void first(function<void()> printFirst) {
        run(0, printFirst);
    }

    void second(function<void()> printSecond) {
        run(1, printSecond);
    }

    void third(function<void()> printThird) {
        run(2, printThird);
    }
};