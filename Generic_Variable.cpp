#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    auto fun = [](auto a, auto b){return a+b;};
    cout<<fun(10, 20.5)<<endl;
    return 0;
}
