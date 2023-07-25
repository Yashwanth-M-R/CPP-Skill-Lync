//#include<iostream>
//using namespace std;
//
//double division(int a, int b){
//    if(b==0){
//        throw "Division by zero condition!";
//    }
//    else{
//        return (a/b);
//    }
//}
//
//int main(){
//    int a = 10;
//    int b = 0;
//    double z;
//    try{
//        z = division(a,b);
//        cout<<z<<endl;
//    }catch(const char* msg){
//        cerr<<msg<<endl;
//    }
//    return 0;
//}

#include<iostream>
using namespace std;

int main(){
    cout<<"Before try\n";
    try{
        cin>>y;
        cout<<"Inside try\n";
        if(y < 0){
            throw y;
            cout<<"After throw\n"
        }
        else{
            throw 's';
        }
    }
    catch(int z){
        cout<<"Exception caught negative number\n";
    }
    catch(char c){
        cout<<"proceed";
    }
    return 0;
}
