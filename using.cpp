#include<iostream>
using namespace std;

class base{
public:
    void greet(){
        cout<<"Hello from base"<<endl;
    }
};

class derived : public base{
public:
    using base::greet;
    void greet(string s){
        cout<<"Hello from "<<s<<endl;
        greet();
    }
};

int main(){
    derived d;
    d.greet("slim shady");
    return 0;
}
