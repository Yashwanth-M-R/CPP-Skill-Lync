#include<iostream>
using namespace std;

//virtual class needs to be called in base class

//class A{
//public:
//    void printclose(){
//        display();
//    }
//    virtual void display(){
//        cout<<"Base class function is called"<<endl;
//    }
//};
//
//class B : public A{
//    virtual void display(){
//        cout<<"Derived class function is called"<<endl;
//    }
//};
//
//int main(){
//    A a1;
//    B b1;
//    a1.printclose();
//    b1.printclose();
//    return 0;
//}

#include<iostream>
using namespace std;

class a{
public:
    virtual void f(){
        cout<<"The base class function is called"<<endl;
    }
};

class b: public a{
public:
    void f(){
        cout<<"The derived class function is called"<<endl;
    }
};

int main(){
    a base;
    b derived;

    a *baseptr = &base;
    baseptr->f();

    b *derivedptr = &derived;
    derivedptr->f();

    return 0;
}

