#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Base{
public:
    virtual void print(){
        cout<<"Base Class"<<endl;
    }
};

class Derived: public Base{
public:
    void print(){
        cout<<"Derived Class"<<endl;
    }
};

int main() {
    Base b1;
    Derived d1;
    Base* basePtr = static_cast<Base*>(&d1);
    basePtr->print();
    Derived* derivedPtr = static_cast<Derived*>(basePtr);
    derivedPtr->print();
    return 0;
}
