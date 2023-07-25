//#include <iostream>
//#include <memory>
//using namespace std;
//
//int main() {
//    shared_ptr<string> p1 = make_shared<string>();
//
//    *p1 = "Modern C++";
//
//    cout<<"p1 count = "<<p1.use_count()<<endl;
//    //{} to show scope of the pointer, automatically gets destroyed.
//    {
//    shared_ptr<string>p2(p1);
//    cout<<"p2 is pointing to the same object as p1"<<endl;
//
//    cout<<"p2 count = "<<p2.use_count()<<endl;
//    }
//    cout<<"p1 count = "<<p1.use_count()<<endl;
//
//    return 0;
//}


#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<string> p1 = make_shared<string>();

    *p1 = "Modern C++";

    cout<<"p1 count = "<<p1.use_count()<<endl;

    shared_ptr<string>p2(p1);
    cout<<"p2 is pointing to the same object as p1"<<endl;

    cout<<"p2 count = "<<p2.use_count()<<endl;
    p2.reset();
    cout<<"p1 count = "<<p1.use_count()<<endl;

    return 0;
}
