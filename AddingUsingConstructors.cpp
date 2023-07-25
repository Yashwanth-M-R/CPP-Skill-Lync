#include <iostream>
#include<stdint.h>

using namespace std;

class Sum{
    int sum;
public:
    Sum(int i, int j){
        sum = i+ j;
        cout<<sum<<endl;
    }
};

int main()
{
    Sum s1(2,3);
    return 0;
}


