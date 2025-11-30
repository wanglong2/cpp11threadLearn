//
// Created by wanglong on 2025/11/28.
//

#include <iostream>
#include "thread"

using std::thread;
using std::cout;
using std::endl;

struct func{
    int& i;
    func(int& i_) :i(i_){}
    void operator()(){
        for (int j = 0; j < 1000000; ++j) {
            cout << "1111111\n";
        }
    }
};


int main(){
    int localI = 1;
    func myFunc(localI);

    thread t1(myFunc);
    // 不等待 t1 结束
    t1.detach();
//    t1.join();

}