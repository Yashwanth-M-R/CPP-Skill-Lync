#include<iostream>
#include<string>
#include<regex>

using namespace std;

int main(){
    string input = "There are 10 apples and 5 oranges on the table.";
    regex pattern("\\b\\d+\\b");
    sregex_iterator it(input.begin(), input.end(), pattern);
    sregex_iterator end;

    cout<<"Numbers in the input string: "<<endl;
    while(it != end){
        cout<<it->str()<<endl;
        ++it;
    }
    cout<<endl;
    return 0;
}
