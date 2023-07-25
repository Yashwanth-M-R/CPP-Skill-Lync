#include<iostream>
#include<string>
#include<regex>
using namespace std;

int main(){
    string fnames[] = {"a.txt", "bar.txt", "test", "AAA.txt", "hey.txt", ".txt",};
    regex txt_regex("[a-z 0-9]+\\.txt");
    for(auto &i: fnames){
        cout<<i<<" : "<<regex_match(i, txt_regex)<<endl;
    }
    return 0;
}
