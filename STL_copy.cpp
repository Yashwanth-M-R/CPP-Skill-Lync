#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[]  = {5, 10, 15, 20, 25};
    vector<int> vec1(5);

    //arr+5 will point to end of arr
    //copy(arr, arr+5, vec1.begin());

    copy_if(arr, arr+5, vec1.begin(), [](int i){return (i>=0);});

    cout<<"Array elements are: "<<endl;
    for(int y:arr){
        cout<<y<<" ";
    }
    cout<<endl;
    for(int y:vec1){
        cout<<y<<" ";
    }
    cout<<endl;
    return 0;
}

