#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

int y = 0;
mutex m;

void threadFunc(){
    m.lock();
    int x = 50;
    y = 2;
    int c = x/y;
    cout<<"The value of C is: "<<c<<endl;
    m.unlock();
}

int main(){
    thread th1(threadFunc);
    thread th2(threadFunc);
    th1.join();
    th2.join();
    return 0;
}
