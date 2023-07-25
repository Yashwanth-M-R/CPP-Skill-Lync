#include <iostream>
using namespace std;

int main() {
    int x = 42;

    auto lambda = [x]() mutable {
        x = x+2;
        return x;
    };

    cout<< lambda() << endl;

    return 0;
}
