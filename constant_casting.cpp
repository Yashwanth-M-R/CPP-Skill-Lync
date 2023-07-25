#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int add(int *num){
    return (*num + 10);
}

int main() {
    const int val = 10;
    const int *ptr = &val;
    int *ptr1 = const_cast<int *>(ptr);
    cout<<add(ptr1);

    return 0;
}

