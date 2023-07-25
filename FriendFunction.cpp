#include <iostream>
#include<stdint.h>

using namespace std;

class Box{
private:
    int length, width;
public:
    Box(){}
    Box(int l, int w){
        length = l;
        width = w;
    }
    friend int printArea(Box);
};

int printArea(Box a1){
    cout<<"The Area of the box is: "<<a1.length*a1.width<<endl;
}

int main()
{
    Box b1(2,3);
    printArea(b1);
    return 0;
}


