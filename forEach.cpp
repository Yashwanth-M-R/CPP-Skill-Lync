#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

void myfunc1(int i){
    cout<<i<<" ";
}

void myfunc2(pair<char, int> p){
    cout<<p.first<<" -> "<<p.second<<endl;
}



int main() {
    vector<int> numbers{1, 2, 3, 4, 5};
    map<char, int> myMap;
    cout<<"Displaying the elements of the stack: "<<endl;
    myMap['a'] = 1;
    myMap['b'] = 2;
    myMap['c'] = 3;
    cout<<"Printing the vector:"<<endl;
    for_each(numbers.begin(), numbers.end(), myfunc1);
    cout<<endl;
    cout<<"Printing the map:"<<endl;
    for_each(myMap.begin(), myMap.end(), myfunc2);
    return 0;
}

