#include<iostream>
#include<regex>
#include<string>

using namespace std;

int main(){
    string input = "The quick brown fox jumps over the lazy dog";
    regex pattern("fox");

    if(regex_search(input, pattern)){
        cout<<"Found fox in the input string."<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}
