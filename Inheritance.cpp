#include <iostream>
#include<stdint.h>

using namespace std;

class Vehicle{
protected:
    string brand = "ford";
public:
    void honk(){
        cout<<"tut!, tut!"<<endl;
    }
};

class car : public Vehicle{
public:
    string model = "mustang";
    void display(){
        cout<<"Model of the Car is: "<<model<<endl;
        cout<<"Brand of the Car is: "<<brand<<endl;
    }
    void brand_get(){
        cin>>brand;
    }
};

int main()
{
    car c1, c2;
    c1.brand_get();
    c1.display();
    c1.honk();
    return 0;
}


