#include<iostream>
#include<thread>
#include<bits/stdc++.h>
#include<mutex>
#include<atomic>

using namespace std;
atomic<int> counter(0);
mutex m;

void thread_fun(){
    for(long int j=0; j<1000000; j++){
        m.lock();
        counter++;
        m.unlock();
    }
}

int main(){
    thread friends[5];
    for(int i=0; i<5; i++){
        friends[i] = thread(thread_fun);
    }
    for(int y=0; y<5; y++){
        friends[y].join();
    }
    cout<<"Value of Counter: "<<counter;

    return 0;
}
