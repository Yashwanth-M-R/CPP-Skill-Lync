#include <iostream>
#include<stdint.h>

using namespace std;

class MyClass{

private:
    int x;
public:
    void setvalue(){
        x = 10;
    }
    void getvalue(){
        cout<<"The set value is "<<x<<endl;
    }
};

int main()
{
    MyClass c1;
//  c1.x = 10; Not Allowed
    c1.setvalue();
    c1.getvalue();
    return 0;
}


