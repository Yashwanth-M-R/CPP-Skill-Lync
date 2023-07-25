#include<iostream>
#include<list>
using namespace std;


int main(){
    list<int>numbers = {10, 20, 30};
    list<int> ::iterator p1;
    p1 = numbers.insert(numbers.begin(), 0);
    numbers.push_back(20);
    numbers.push_back(30);
    for(auto &a:numbers){
        cout<<a<<endl;
    }
    return 0;
}
