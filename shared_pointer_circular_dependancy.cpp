#include <iostream>
#include <memory>
using namespace std;
//class fruit;
//class vegetable;
//
//class fruit{
//public:
//    shared_ptr<vegetable> veg;
//    ~fruit(){
//        cout<<"fruit was destroyed\n";
//    }
//};
//
//class vegetable{
//public:
//    shared_ptr<fruit> fru;
//    ~vegetable(){
//        cout<<"vegetable was destroyed"<<endl;
//    }
//};
//
//int main() {
//    shared_ptr<fruit> apple = make_shared<fruit>();
//    cout<<apple.use_count()<<endl;
//
//    shared_ptr<vegetable>potato = make_shared<vegetable>();
//    cout<<potato.use_count()<<endl;
//
//    apple->veg=potato;
//    cout<<apple.use_count()<<endl;
//    potato->fru=apple;
//    cout<<potato.use_count()<<endl;
//
//    return 0;
//}

#include <iostream>
#include <memory>
using namespace std;

int main(){
    shared_ptr<int> shrd_ptr_1(new int(8));
    weak_ptr<int> wk_ptr(shrd_ptr_1);
    cout<<"Count the number of weak ptr: "<<wk_ptr.use_count()<<endl;
    shared_ptr<int>shrd_ptr_2(shrd_ptr_1);
    cout<<"Count the number of weak ptr: "<<wk_ptr.use_count()<<endl;


    return 0;
}
