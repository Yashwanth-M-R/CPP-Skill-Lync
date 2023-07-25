#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>
#include<future>

using namespace std;

//bool is_odd(int x){
//    if(x%2==0){
//        return false;
//    }
//    else{
//        return true;
//    }
//}
//
//int main(){
//    future<bool> fut = async(is_odd, 4);
//    cout<<"Waiting";
//    chrono::milliseconds span(100);
//
//    while(fut.wait_for(span)==future_status::timeout){
//        cout<<".";
//    }
//    bool x = fut.get();
//    cout<<"\n4"<<(x?" is odd":" is even");
//    return 0;
//}


//Trying to slow down the operation to let the contents of the while loop to be executed.

int slowOperation(){
    this_thread::sleep_for(chrono::seconds(4));
    return 42;
}

int main(){
    future<int> fut = async(slowOperation);

    future_status status;
    do{
        status = fut.wait_for(chrono::seconds(1));
        if(status == future_status::timeout){
            cout<<"Still Waiting...."<<endl;
        }
    }while(status!=future_status::ready);
    int result = fut.get();
    cout<<"The result of the slow operation is "<<result<<endl;
    return 0;
}
