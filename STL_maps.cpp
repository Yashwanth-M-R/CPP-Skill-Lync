#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> employee{{1, "Karthik"}, {2, "Jagan"}, {3, "Gagan"}};
    map<int, string>::iterator it;
    cout<<"printing the keys"<<endl;
    for(it=employee.begin(); it != employee.end(); it++){
        cout<<it->first<<" ";
        cout<<it->second<<" ";
    }
    cout<<endl;

    return 0;
}

