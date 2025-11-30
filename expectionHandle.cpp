//
// Created by wanglong on 2025/11/30.
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
    int local_var = 10;
    func myF(local_var);
    thread t(myF);
    try {
        int x = 1/0;
    }catch(...) {
        t.join();
        throw ;
    }
    t.join();




}

