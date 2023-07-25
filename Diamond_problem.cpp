#include<iostream>
using namespace std;

class person{
public:
    person(int x){
        cout<<"person constructor was called"<<endl;
    }
};

class faculty: public person{
public:
    faculty(int x):person(x){
        cout<<"faculty constructor was called"<<endl;
    }
};

class student : public person{
public:
    student(int x):person(x){
        cout<<"student constructor was called"<<endl;
    }
};

class ta : public faculty, public student{
public:
    ta(int x):faculty(x), student(x){
        cout<<"TA constructor was called"<<endl;
    }
};

int main(){
    ta t1(5);
    return 0;
}
