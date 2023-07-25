#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> numbers;
    numbers.insert(100);
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);    numbers.insert(30);    numbers.insert(50);
    cout<<"Displaying the elements of the set: "<<endl;
    for (auto& i:numbers) {
        cout<< i << " ";
        cout << endl;
    }
    return 0;
}
