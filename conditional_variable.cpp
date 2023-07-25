#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
#include<chrono>

using namespace std;

mutex m;
condition_variable cv;
bool ready = false;

void wait_for_signal(){
    unique_lock<mutex> lock(m);
    cv.wait(lock, []{return ready;});
    cout<<"Received signal, continue execution."<<endl;
}

int main(){
    cout<<"Main thread started."<<endl;
    thread worker(wait_for_signal);

    this_thread::sleep_for(chrono::seconds(2));

    {
        lock_guard<mutex> lock(m);
        ready = true;
    }
    cv.notify_one();
    worker.join();
    cout<<"Main thread finished"<<endl;
    return 0;
}

