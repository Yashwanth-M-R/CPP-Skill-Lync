#include <iostream>
#include <memory>
using namespace std;

//class ABC{
//public:
//    string name;
//    ABC(string n){
//        name = n;
//    }
//};
//
//int main() {
//    auto p = make_unique<ABC>("Modern C++");
//    cout<<"Memory Address of p is:\n";
//    cout<<p.get()<<endl;
//    cout<<p->name<<endl;
//    p = make_unique<ABC>("C++");
//    cout<<"Memory Address of p is"<<endl;
//    cout<<p.get()<<endl;
//    cout<<p->name<<endl;
//    return 0;
//}

int main(){
    auto p = make_unique<int>();
    cout<<p.get()<<endl;


    //Transferring ownership of object from one pointer to another pointer through move()
    auto q=move(p);
    cout<<q.get()<<endl;
    cout<<p.get()<<endl;
    return 0;
}
