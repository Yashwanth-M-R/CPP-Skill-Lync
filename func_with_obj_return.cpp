#include<iostream>
#include<math.h>
using namespace std;
//
//class point{
//private:
//    int x1, y1;
//    point(int x, int y ){
//        x1 =x;
//        y1 =y;
//    }
//public:
//    static point polar(float, float);
//    static point rectangular(float, float);
//    void display();
//};
//
//void point::display(){
//    cout<<" x:: "<<this->x1<<endl;
//    cout<<" y:: "<<this->y1<<endl;
//}
//
//point point::polar(float x, float y){
//    return point(x*cos(y), x*sin(y));
//}
//
//point point::rectangular(float x, float y){
//    return point(x,y);
//}
//
//int main(){
//    point p1 = point::polar(5.7, 1.2);
//    p1.display();
//
//    point p2 = point::rectangular(5.7, 1.2);
//    p2.display();
//    return 0;
//}


class student{
    static int num;
public:
    static int getroll(){
        return num++;
    }
};
int student::num=10;
int main(){
    student s1;
    for(int i=0; i<5; i++){
        cout<<s1.getroll()<<endl;
    }

    return 0;
}
