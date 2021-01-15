 #include <iostream>
// https://www.programmersought.com/article/73522283407/
using namespace std;
class Point {
public:
    /* data */
    int x,y;
public:
    Point(/* args */);
    Point(/* args */int a ,int b);
    Point(const Point& r);
    bool operator==(const Point& r);
    Point& operator-();
    Point& operator++(int a);
    ~Point();
};
Point& Point::operator++(int){
    cout << "opertator_overloading" << endl; 
    x = x+4;
    y = y+4;
    return *this;
    
}
Point& Point::operator-(){
    cout << "opertator_overloading" << endl; 
    x = -x;
    y = -y;
    return *this;
    
}
bool Point::operator==(const Point& r){
    cout << "opertator_overloading" << endl; 
    if (this == &r)
    {
        /* code */
        return true;
    }
    if (this->x == r.x)
    {
        /* code */
        return true;
    }
    return false;
    
}

Point::Point(/* args */) :x(0),y(0)
{
    cout << "create constructor" << endl;
}
Point::Point(/* args */int a ,int b) :x(a),y(b)
{
    cout << "create constructor" << endl;
}

Point::Point(/* args */const Point& r) :x(r.x),y(r.y)
{
    cout << "copy constructor" << endl;
    x = r.x; // shallow copy
    char* str; // 先宣告新的空間
    str = new char[x]; // deep copy
}

Point::~Point()
{
    cout << "de constructor" << endl;
}


int main(int argc, char const *argv[])
{
    cout << "ptr 1 " << endl;
    Point ptr1(11,1);
    cout << "ptr 1 x " << ptr1.x << endl;
    cout << "ptr 1 y " << ptr1.y << endl;
    ptr1++;
    cout << "ptr 1 x " << ptr1.x << endl;
    cout << "ptr 1 y " << ptr1.y << endl;
    return 0;
}
