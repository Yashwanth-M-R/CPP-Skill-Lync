#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec{10, 20, 30, 40, 50, 60, 70};
    vector<int>::iterator p;
    cout<<"Initial Vector: "<<endl;
    for(p = vec.begin();p<vec.end();p++){
        cout<<*p<<" ";
    }
    cout<<endl;
    cout<<"Rotating the elements from third index: "<<endl;
    rotate(vec.begin(), vec.begin()+3, vec.end());
    for(p = vec.begin(); p < vec.end(); p++){
        cout<<*p<<" ";
    }
    cout<<endl;

    return 0;
}

