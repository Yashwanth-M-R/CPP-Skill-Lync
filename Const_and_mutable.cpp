#include<iostream>
using namespace std;

class A{
public:
    int a;
    mutable int b;
    A(int x=0, int y=0){
        a = x;
        b = y;
    }
    void seta(int x=0){
        a = x;
    }
    void setb(int y=0){
        b = y;
    }
    void disp(){
        cout<<a<<endl<<b<<endl;
    }
};


int main(){
    const A a1(10, 20);
    a1.b=12;
    cout<<a1.b;
    return 0;
}
