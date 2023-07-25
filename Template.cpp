//Function as a Template

//#include<iostream>
//using namespace std;
//template<class T>
//T GetMax(T a, T b){
//    T result;
//    result = (a>b)?a:b;
//    return result;
//}
//int main(){
//    int i=5, j = 4, k;
//    long l =10, m =5, n;
//    k = GetMax<int>(i, j);
//    n = GetMax<long>(l, m);
//    cout<<k<<endl;
//    cout<<n<<endl;
//    return 0;
//}


//Class As a Template

#include<iostream>
using namespace std;
//
template<class T>
class mypair{
    T a,b;
public:
    mypair(T first, T second){
    a = first;
    b = second;
    }
    T getmax();
};

template<class T>
T mypair<T>::getmax(){
    T retval;
    retval = a>b?a:b;
    return retval;
}

int main(){
    mypair <int> myobject(50, 65);
    cout<<myobject.getmax();
    return 0;
}
