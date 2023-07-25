#include <iostream>
#include<stdint.h>

using namespace std;

class Employee{
public:
    int salary, bonus;
    void calsulate_bonus();
};

void Employee::calsulate_bonus(){
    if(salary>50000){
        bonus = 0;
    }
    else if(salary>25000){
        bonus = salary*0.08;
    }
    else{
        bonus = salary*0.12;
    }
}

int main()
{
    Employee e1[3];
    e1[0].salary = 30000;
    e1[0].calsulate_bonus();
    cout<<"Employee 1 earns "<<e1[0].bonus<<" as Bonus"<<endl;
    return 0;
}


