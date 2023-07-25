#include<iostream>
using namespace std;


//call the class as a friend to share private constructors
class a{
private:
    a(){
        cout<<"constructor of A"<<endl;
    }
    friend class b;
};

class b: public a{
public:
    b(){
        cout<<"constructor of B"<<endl;
    }
};

int main(){
    b b1;
    return 0;
}
