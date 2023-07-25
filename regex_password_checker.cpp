#include<iostream>
#include<regex>
#include<string>

using namespace std;

int main(){
    string input;
    cout<<"Enter a Password"<<endl;
    cin>>input;
    regex pattern("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[^a-zA-Z\\d]).{8,}$");

    if(regex_search(input, pattern)){
        cout<<"Strong Password"<<endl;
    }
    else{
        cout<<"Weak Password"<<endl;
    }
    return 0;
}
