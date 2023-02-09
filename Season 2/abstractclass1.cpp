#include <iostream>
using namespace std;

class shape
{
    public:
        virtual int area() = 0;
};
class triangle : public shape
{
    public:
        int base;
        int height;
    triangle (int base, int height) : base(base) , height(height){}
    int area()
    {
        return 0.5 * base * height;
    }
};
class circle : public shape
{
    public:
        int radius;
    circle(int radius) : radius(radius) {}
        int area()
        {
            return 3.142 * radius * radius;
        }
};
class square : public shape
{
    public:
        int side;
    square(int side) : side(side) {}
    int area()
    {
        return side * side;
    }
};
int main()
{
    shape *shapez[] = 
    {
        new square(5),
        new triangle(6,4),
        new circle(21)
    };

    for (int i  =0; i < 3; i ++)
            cout << "Shape " << i << ": " << shapez[i]->area() << endl;

}
