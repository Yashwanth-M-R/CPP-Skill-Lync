#include<iostream>
#include<thread>
#include<bits/stdc++.h>

using namespace std;

void thread_fun(){
    cout<<"Thread id: "<<this_thread::get_id()<<"is running"<<endl;
}

int main(){
    thread friends[5];
    int i;

    for(i=0;i<5;i++){
        friends[i] = thread(thread_fun);
    }
    cout<<friends[0].get_id()<<endl;
    cout<<friends[1].get_id()<<endl;
    cout<<friends[2].get_id()<<endl;
    cout<<friends[3].get_id()<<endl;
    cout<<friends[4].get_id()<<endl;

    for(i=0;i<5;i++){
        friends[i].join();
    }
    cout<<"All threads are running"<<endl;
    return 0;
}
