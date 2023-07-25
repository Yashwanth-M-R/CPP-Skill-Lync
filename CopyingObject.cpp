#include <iostream>
#include<stdint.h>

using namespace std;

class MyObj{
    int num1, num2;
public:
    MyObj(){};
    MyObj(int a, int b){
        num1 =  a;
        num2 =  b;
    }
    void display(){
        cout<<"The values of num1 and num2 is\t"<<num1<<"\t"<<num2<<endl;
    }

};

int main()
{
    MyObj o1(10, 20);
    MyObj o2;
    o2 = o1;
    o2.display();
    return 0;
}


