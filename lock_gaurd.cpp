#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

mutex m;

void threadFunc1(int i){
    lock_guard<mutex> guard(m);
    int x = 50;;
    int c = x/i;
    cout<<"The value of C is: "<<c<<endl;
}

int main(){
    thread th1(threadFunc1, 0);
    thread th2(threadFunc1, 2);
    th1.join();
    th2.join();
    return 0;
}

