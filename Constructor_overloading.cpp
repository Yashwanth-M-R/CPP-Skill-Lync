#include <iostream>
#include<stdint.h>

using namespace std;

class MyClass{
public:
    int sal;
    MyClass();
    MyClass(int);
    MyClass(int, string);
};

MyClass :: MyClass(){
    cout<<"Object Created - Default"<<endl;
    sal = 1500;
}
MyClass :: MyClass(int s){
    cout<<"Object Created - Parameterized 1"<<endl;
    sal = s;
}
MyClass :: MyClass(int s, string name){
    cout<<"Object Created - Parameterized 2"<<endl;
    sal = s;
    cout<<"Hello "<<name<<endl;
}

int main()
{
    MyClass c1, c2(5), c3(10, "Em");
    cout<<c1.sal<<endl;
    cout<<c2.sal<<endl;
    cout<<c3.sal<<endl;
    return 0;
}


