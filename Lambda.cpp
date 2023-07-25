#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

//void display(int element){
//    cout<<element<<" ";
//}
//
//int main() {
//    vector<int> V = {1, 2, 3, 4, 5};
//    cout<<"Vector elements: "<<endl;
//    for_each(V.begin(), V.end(), &display);
//    return 0;
//}

//Same code written using Lambda

//int main(){
//    vector<int> V = {1, 2, 3, 4, 5};
//    cout<<"The Vector elements are: "<<endl;
//    for_each(V.begin(), V.end(), [](int element){cout<<element<<" ";});
//    return 0;
//}


//capture the variable both by reference and by value

int main(){
    int a = 5, b = 10;
    auto fun = [a, &b]{return a+b;};
    a = 6;
    b = 30;
    cout<<fun()<<endl;

    return 0;
}
