#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MyClass1{
public:
    virtual void print()const{
        cout<<"This is from Myclass"<<endl;
    }
};

class MyClass2{
public:
    virtual void print()const{
        cout<<"This is from Myclass2"<<endl;
    }
};

class MyClass3: public MyClass1, public MyClass2{
public:
    void print()const{
        cout<<"This is MyClass3\n"<<endl;
    }
};

int main() {
    MyClass1* a = new MyClass1;
    MyClass2* b = new MyClass2;
    MyClass2* c = new MyClass3;

    a->print();
    b->print();
    c->print();

    b = dynamic_cast<MyClass2*>(a);
    if(b)
        b->print();
    else
        cout<<"no MyCLass2\n";

    b = dynamic_cast<MyClass2*>(a);
    if(b)
        b->print();
    else
        cout<<"no MyCLass2\n";

    return 0;
}
