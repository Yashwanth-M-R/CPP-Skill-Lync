#include <iostream>
#include<stdint.h>

using namespace std;

class Car{
public:
    int speed(int maxspeed){
        return maxspeed*2;
    }
    int speed(){
        return 2000;
    }
};

int main()
{
    Car c1;
    cout<<c1.speed(200)<<endl;
    cout<<c1.speed()<<endl;
    return 0;
}


