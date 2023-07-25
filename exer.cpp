#include<iostream>
#include<thread>
#include<mutex>
#include<vector>

using namespace std;

mutex m;

vector<int> v1;

void addList(int max, int interval){
    m.lock();
    for(int i=interval;i<=max;i++){
        if(i%interval == 0){
            v1.push_back(i);
        }
    }
    m.unlock();
}

void display(){
    m.lock();
    for(auto i:v1){
        cout<<i<<" ";
    }
    m.unlock();
}

int main(){
    thread th1(addList, 100, 1);
    thread th2(addList, 100, 10);
    thread th3(display);

    th1.join();
    th2.join();
    th3.join();

    return 0;
}
