#include <iostream>
#include<stdint.h>

using namespace std;

class MyClass{
public:
    int x = 10;
    void myFunction(){
        cout<<"some content in parent class"<<endl;
    }

};

class MyOtherClass{
public:
    void MyOtherFunction(){
        cout<<"Some content in another class"<<endl;
    }
};

class MyChildClass : public MyClass, public MyOtherClass{
};

int main()
{
    MyChildClass c1;
    c1.myFunction();
    c1.MyOtherFunction();
    return 0;
}


