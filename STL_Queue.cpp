#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> numbers;
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    cout<<"Displaying the elements of the stack: "<<endl;
    while (!numbers.empty()) {
        cout << numbers.front() << " ";
        numbers.pop();
    }
    cout << endl;

    return 0;
}
