#include<iostream>
#include<thread>
#include<bits/stdc++.h>

using namespace std;

//int y=0;
//void function_critical_section(){
//    y = 2;
//    y = y + 1;
//}
//
//int main(){
//    thread t1(function_critical_section);
//    thread t2(function_critical_section);
//    t1.join();
//    cout<<"Values of y: "<<y<<endl;
//    t2.join();
//    cout<<"Values of y: "<<y<<endl;
//
//    return 0;
//}
static long int counter=0;

void thread_fun(){
    for(long int j=0; j<1000000; j++){
        counter++;
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


