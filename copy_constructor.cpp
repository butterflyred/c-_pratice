 #include <iostream>
// https://www.programmersought.com/article/20225521276/
using namespace std;
class Point {
private:
    /* data */
    int x,y;
public:
    Point(/* args */);
    Point(/* args */int a ,int b);
    Point(const Point& r);
    ~Point();
};

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
    cout << "ptr 2 " << endl;
    Point ptr2 = ptr1; // copy constructor
    cout << "ptr 3 " << endl;
    Point ptr3(ptr1); // copy constructor
    return 0;
}
