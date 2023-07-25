#include<iostream>
#include<string>

using namespace std;

template<typename T1, typename T2, typename ResultType>

ResultType addAndConvert(T1 a, T2 b){
    return static_cast<ResultType>(a+b);
//    return (ResultType)(a+b);
}

int main(){
    int num1 = 5;
    int num2 = 7;
    double result1 = addAndConvert<int, int, double>(num1, num2);
    cout<<"Result 1: "<<result1<<endl;

    int num3 = 10;
    float num4 = 3.14;
    int result2 = addAndConvert<int, float, int>(num3, num4);
    cout<<"Result 2: "<<result2<<endl;

    string num5 = "10";
    string num6 = "25";
    string result3 = addAndConvert<string, string, string>(num5, num6);
    cout<<"Result 3: "<<result3<<endl;


    return 0;
}
