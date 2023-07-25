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

class MyChild : public MyClass{
};

class MyGrandChild : public MyChild{
};


int main()
{
    MyGrandChild c1;
    c1.myFunction();
    return 0;
}


