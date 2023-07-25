#include<iostream>
#include<thread>
#include<bits/stdc++.h>

using namespace std;

//void thread_fun(int id){
//    cout<<"Thread "<<id<<" is running"<<endl;
//}
//
//int main(){
//    thread th1(thread_fun, 1);
//
//    thread th2(thread_fun, 2);
//
//    cout<<"All Threads Completed"<<endl;
//    th2.join();
//    th1.join();
//    return 0;
//}


//void thread_fun(int *id){
//    cout<<"Thread "<<*id<<" is running"<<endl;
//}
//
//int main(){
//    int i;
//    thread friends[5];
//    for(i=0; i<5; i++){
//        friends[i] = thread(thread_fun, &i);
//    }
//    for(int i=0; i<5; i++){
//        friends[i].join();
//    }
//    cout<<"All Threads Completed";
//
//    return 0;
//}

int main(){
    thread th([]{for(int i=0; i<5; i++){
        cout<<i<<"lambda expression as a call back function"<<endl;
    }
    });
    cout<<"main thread"<<endl;
    th.join();
    return 0;
}
