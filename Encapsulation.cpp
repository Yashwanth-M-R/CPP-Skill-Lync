#include <iostream>
#include<stdint.h>

using namespace std;

class Adder{
    int total;
public:
    Adder(int i=0){
        total = i;
    }
    //Interface to outside world
    void addNum(int Number){
        total += Number;
    }

    //Interface to outside world
    int getTotal(){
        return total;
    }
};

int main()
{
    Adder a1;
    a1.addNum(5);
    cout<<a1.getTotal()<<endl;
    a1.addNum(10);
    cout<<a1.getTotal()<<endl;
    a1.addNum(20);
    cout<<a1.getTotal()<<endl;
    return 0;
}


