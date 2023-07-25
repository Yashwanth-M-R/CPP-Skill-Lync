#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> numbers;
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    cout<<"Displaying the elements of the priority queue: "<<endl;
    while (!numbers.empty()) {
        cout << endl << numbers.top();
        numbers.pop();
    }
    return 0;
}
