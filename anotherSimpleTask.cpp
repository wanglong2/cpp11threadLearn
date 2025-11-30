//
// Created by wanglong on 2025/11/28.
//

#include <iostream>
#include <thread>

class backgroundTask {
public:
    void operator()() const {
        hello1();
        hello2();
    }

    void hello1() const {
        std::cout << "hello1\n";
    }

    void hello2() const {
        std::cout << "hello2\n";
    }


};


int main() {
    backgroundTask b;
    std::thread t(b);
    t.join();
    // 这就像是声明了一个函数，携带一个参数 而不是声明了一个对象
    std::thread t1((backgroundTask()));
    t1.join();
    // 避免的方法
    std::thread my_thread1((backgroundTask()));
    my_thread1.join();
    std::thread my_thread{backgroundTask()};
    my_thread.join();
    //    使用lambda表达式
    std::thread t3([](){
       std::cout << "222222222222222222222222222222\n";
    });
    t3.join();
    return 0;
}

