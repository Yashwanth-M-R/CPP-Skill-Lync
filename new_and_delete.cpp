#include<iostream>
using namespace std;


int main(){
    int* const arr = new int[5];
    for(int i=0; i<5; i++){
        arr[i] = i;
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
