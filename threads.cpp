#include<iostream>
#include<thread>
#include<bits/stdc++.h>

using namespace std;

void fun(){
    cout<<"I am the callable function of the thread"<<endl;
}

int main(){
    thread th(&fun);

    cout<<"I am the main thread\n"<<endl;
    return 0;
    th.join();
}
