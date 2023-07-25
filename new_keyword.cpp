#include<iostream>
using namespace std;

class a{
public:
    a(){
        cout<<"Constructing base"<<endl;
    }
    virtual ~a(){
        cout<<"destructing base"<<endl;;
    }
};

class b: public a{
public:
    b(){
        cout<<"Constructing derived"<<endl;
    }
    virtual ~b(){
        cout<<"destructing derived"<<endl;;
    }
};

int main(){
    b *derivedptr = new b();
    a *baseptr = derivedptr;
    delete baseptr;
    return 0;
}
