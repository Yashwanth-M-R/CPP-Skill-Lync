#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    vector<int>numbers = {5, 10, 15};
    int x, n;
    cout<<"Before modifying the vector elements: "<<endl;
    for(auto a:numbers){
        cout<<a<<" ";
    }
    cout<<endl;
    cout<<"Enter the vector element to be inserted: "<<endl;
    cin>>n;
    cout<<"Enter the position of the element "<<endl;
    cin>>x;
    numbers.insert(numbers.begin() + x, n);
    cout<<"After modification: "<<endl;
    for(auto a:numbers){
        cout<<a<<" ";
    }
    return 0;
}
