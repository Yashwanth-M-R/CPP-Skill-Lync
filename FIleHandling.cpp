//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main()
//{
//    ofstream MyFile("somefile.txt");
//    MyFile<<"Random content to be written in this file.";
//    MyFile.close();
//    return 0;
//}

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream newfile;
    newfile.open("tpoint.txt", ios::out);
    if(newfile.is_open()){
        newfile<<"Bro had Biryani for lunch";
        newfile.close();
    }
    newfile.open("tpoint.txt", ios::in);
    if(newfile.is_open()){
        string tp;
        while(getline(newfile, tp)){
            cout<<tp<<endl;
        }
        newfile.close();
    }

    return 0;
}




