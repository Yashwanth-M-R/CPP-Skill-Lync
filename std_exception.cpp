#include<iostream>
#include<vector>
#include<exception>

using namespace std;

int sum(int a){
    throw invalid_argument("invalid");
}

int main(){
    vector<int> numbers = {10, 20, 30, 40, 50};
    try{
        cout<<sum(numbers.at(0));
//        int index = 10;
//        int value = numbers.at(index);
//        cout<<"Value at index "<<index<<" : "<<value<<endl;
    }
//    catch(const out_of_range& ex){
//        cout<<"Exception caught: "<<ex.what()<<endl;
//    }
    catch(const invalid_argument& ex){
        cout<<"Exception caught: "<<ex.what()<<endl;
    }
    catch(const exception& ex){
        cout<<"Standard Exception caught: "<<ex.what()<<endl;
    }catch(...){
        cout<<"Unknown Exception Caught"<<endl;
    }
    return 0;
}
