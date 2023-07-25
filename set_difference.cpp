#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v1{10, 20, 30, 40, 50};
    vector<int> v2{10, 20, 30, 60, 80};
    vector<int> res(6);
    vector<int>::iterator i, j, k;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    k = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), res.begin());

    cout<<"Vector 1"<<endl;
    for(i=v1.begin(); i<v1.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Vector 2"<<endl;
    for(j=v2.begin(); j<v2.end(); j++){
        cout<<*j<<" ";
    }
    cout<<endl;cout<<"Result"<<endl;
    for(k=res.begin(); k<res.end(); k++){
        cout<<*k<<" ";
    }
    cout<<endl;

    return 0;
}
