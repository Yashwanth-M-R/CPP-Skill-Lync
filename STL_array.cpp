#include<iostream>
#include<algorithm>
#include<array>
using namespace std;


int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    array<int, 5>numbers;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<5; i++){
        cin>>numbers[i];
    }
    sort(numbers.begin(), numbers.end());
    cout<<"The elements in the array are: "<<endl;
    for(auto a:numbers){
        cout<<a<<" ";
    }
    return 0;
}
