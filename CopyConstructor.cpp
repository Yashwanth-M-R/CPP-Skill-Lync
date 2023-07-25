#include <iostream>
#include<stdint.h>

using namespace std;

class Point{
    int x, y;
public:
    void init(int i, int j){
        x = i;
        y = j;
    }
    Point(){};
    Point(Point &t){
        x = t.x;
//        y = t.y;
    }
    void getPoint(){
        cout<<"The Point is: "<<"("<<x<<","<<y<<")"<<endl;
    }

};

int main()
{
    Point p1;
    p1.init(10, 20);
    p1.getPoint();
    Point p2(p1);
    p2.getPoint();
    return 0;
}


