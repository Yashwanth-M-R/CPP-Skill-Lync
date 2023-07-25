#include<iostream>
#include<thread>
#include<future>

using namespace std;

int main(){
    int counter = 0;
    future<int> result = async(launch::async, [](){return 8;});//sub thread does this
    cout<<"Waiting...."<<endl;
    /* Main thread does this while waiting.
    Here the task for main code can be written.
    */
    for(long int i=0; i<500000; i++){
        counter++;
    }
    cout<<"Value of Counter is "<<counter<<endl;
    result.wait();
    cout<<"Final Result "<<result.get()<<endl;
    return 0;
}
