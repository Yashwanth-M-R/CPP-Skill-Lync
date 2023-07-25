#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MyClass{
public:
    int *x;
    MyClass(int val){
        x = new int(val);
    }
    MyClass(const MyClass &obj){
        x = obj.x;
    }
    ~MyClass(){
        delete x;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1;
    *obj2.x = 20;
    cout<<*obj1.x<<endl;
    cout<<obj2.x<<endl;
    return 0;
}
