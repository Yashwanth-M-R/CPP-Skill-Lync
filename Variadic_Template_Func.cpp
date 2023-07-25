#include<iostream>
using namespace std;

//void display()
//{
////    Empty function is used to break the recursive chain
//}
//
//template<typename S, typename ...Args>
//void display(S first, Args...args){
//    cout<<first<<endl;
//    display(args...);
//}
//
//int main(){
//    display(20, 30, 40, "Embitel", "A", 55.25);
//    return 0;
//}

template <typename... Args>
auto sum(Args... args) {
    return (args + ...); // Fold expression: (args + ...) performs summation of all arguments
}

int main() {
    int result = sum(1, 2, 3, 4, 5);
    std::cout << "Sum: " << result << std::endl; // Output: Sum: 15

    double decimalSum = sum(1.5, 2.5, 3.5);
    std::cout << "Decimal Sum: " << decimalSum << std::endl; // Output: Decimal Sum: 7.5

    return 0;
}
