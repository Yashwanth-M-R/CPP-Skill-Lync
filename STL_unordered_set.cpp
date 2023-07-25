#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> Employee {1, 5, 10, 20};
    cout<<"Employee ID: "<<endl;
    for(auto &id:Employee){
        cout<<id<<" ";
    }
    cout<<endl;
    Employee.insert(25);
    for(auto &id:Employee){
        cout<<id<<" ";
    }
    cout<<"To check if the Number 1 exists in the unordered_set"<<endl;
    if(Employee.find(1) != Employee.end()){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }



    return 0;
}

