#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> numbers;
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    cout<<"Displaying the elements of the stack: "<<endl;
    while (!numbers.empty()) {
        cout << numbers.top() << " ";
        numbers.pop();
    }
    cout << endl;

    return 0;
}
