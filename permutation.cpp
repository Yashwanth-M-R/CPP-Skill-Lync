#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[]  = {5, 10, 15, 20};
    sort(arr, arr+4);
    int count = 1;
    cout<<"There are 24 possible permutations with 4 elements:\n";
    do{
       cout<<"Permutation: "<<count<<": ";
       cout<<arr[0]<<" "<<arr[1]<< " "<<arr[2]<<" "<<arr[3]<<endl;
       count++;
    }while(next_permutation(arr, arr+4));

    return 0;
}
