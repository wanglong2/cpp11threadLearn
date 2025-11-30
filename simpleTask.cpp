//
// Created by wanglong on 2025/11/28.
//
#include <iostream>

#include <thread>

void sayHello(){
    std::cout << "hello C++\n";
}

int main(){
    // 此处函数不要加括号
    std::thread t(sayHello);
    t.join();
    return 0;
}
