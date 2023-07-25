#include <iostream>
#include<stdint.h>

using namespace std;

class Animal{
public:
    void animalSound(){
        cout<<"Howl"<<endl;
    }
};

class pig : public Animal{
public:
    void animalSound(){
        cout<<"Oink Oink"<<endl;
    }
};

class Dog : public Animal{
public:
    void animalSound(){
        cout<<"Bark Bark"<<endl;
    }
};

int main()
{
    Dog d1;
    pig p1;
    Animal a1;
    d1.animalSound();
    p1.animalSound();
    a1.animalSound();
    return 0;
}


