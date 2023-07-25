#include <iostream>
#include<stdint.h>

using namespace std;

class Car{
public:
    int fuel;
    Car(){
        fuel = 10;
        cout<<"The Constructor gets invoked"<<endl;
    }
    ~Car(){
        cout<<"The Destructor gets invoked"<<endl;
    }

};

int main()
{
    Car c1, c2;
    cout<<c1.fuel<<endl;
    cout<<c1.fuel<<endl;
    return 0;
}


