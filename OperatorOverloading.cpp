#include <iostream>
#include<stdint.h>

using namespace std;

class ComplexNumber{
    int real, imaginary;
public:
    ComplexNumber(){}
    ComplexNumber(int i, int j){
        real = i;
        imaginary = j;
    }
    void print(){
        cout<<"The complex number is "<<real<<" + "<<imaginary<<"i"<<endl;
    }
    ComplexNumber operator==(ComplexNumber c){
        ComplexNumber c4(0,0);
        c4.real = this->real + c.real;
        c4.imaginary = this->imaginary + c.imaginary;
        return c4;

    }

};

int main()
{
    ComplexNumber c1(4, 5);
    ComplexNumber c2(5, 100);
    ComplexNumber c3;
    c1.print();
    c2.print();
    c3 = c1 == c2;
    c3.print();
    return 0;
}


