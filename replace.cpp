#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isodd(int y){
    if(y%2 != 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    vector<int> vec{5, 4, 3, 2, 1, 4, 5};
    cout<<"before replacing, v: ";
    for(int x: vec){
        cout<<x<<" ";
    }
    cout<<endl;
    replace_if(vec.begin(), vec.end(), isodd, 10);
    cout<<"after replacing, vec: ";
    for(int x: vec){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
