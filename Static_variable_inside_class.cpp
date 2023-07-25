#include<iostream>
using namespace std;

class test{
private:
    int objNumber;
    static int count;
public:
    test(){
        objNumber = ++count;
    }

    ~test(){
        --count;
    }

    void printObjNumber(){
        cout<<"Object Number: "<<objNumber<<endl;
    }
    void printCount(){
        cout<<"Count: "<<count<<endl;
    }
};
int test::count;

int main(){
    test t1, t2;
    t2.printCount();
    test t3;
    t1.printObjNumber();
    t2.printObjNumber();
    t3.printObjNumber();
    return 0;
}
