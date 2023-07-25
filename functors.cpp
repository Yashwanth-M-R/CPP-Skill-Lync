#include <iostream>
using namespace std;

//class functor{
//public:
//    void operator()(){
//        cout<<"operation is done"<<endl;
//    }
//};
//
//int main(){
//    functor f1;
//    f1();
//    return 0;
//}


// Functor class definition
//class Multiplier {
//public:
//    Multiplier(int factor) : factor_(factor) {}
//
//    // Overloaded function call operator
//    int operator()(int value) const {
//        return value * factor_;
//    }
//
//private:
//    int factor_;
//};
//
//int main() {
//    // Create an instance of the functor with a factor of 5
//    Multiplier multiplier(5);
//
//    // Use the functor as if it were a function
//    int result = multiplier(10); // Equivalent to calling multiplier.operator()(10);
//    cout << "Result: " << result << endl; // Output: Result: 50
//
//    return 0;
//}


class PreserveState{
private:
    int num;
public:
    int operator()(int x, int y)const{
        return x+y;
    }
};

int main(){
    PreserveState p1;
    cout<<p1(20, 30)<<endl;;
    return 0;
}
