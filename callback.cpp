#include <iostream>
#include <bits/stdc++.h>

using namespace std;

float sum(float val1, float val2){
    return val1 + val2;
}

void display(float (*fptr)(float, float)){
    float s = fptr(25.3, 12.5);
    cout<<"Sum is: "<<s<<endl;
}

int main(){
    float (*fun)(float, float);
    fun = sum;
    display(fun);
    return 0;
}
