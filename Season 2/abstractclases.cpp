#include <iostream>
using namespace std;
class shape 
{
    public:
        virtual int  area() = 0;
};
class triangle : public shape
{
    public:
        int base;
        int height;

        triangle(int x, int m) : base(x), height(m) {}
        int area()
        {
            return 0.5 * base * height;
        }
};
class square : public shape
{
    public:
         int side;
         square(int y) : side(y) {}
         int area()
         {
            return side*side;
         }

};
int main()
{
    shape *shapes[] = 
    {
        new triangle(8, 10) ,
        new square(7)
    };
    for (int i = 0; i < 4; i ++)
            {
                cout << "shape" <<i << ":" << shapes[i]->area() << endl;
            }
}
