#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int width;
        rectangle(int w, int l)
        {
            length = l;
            width = w;
        }
        int area()
        {
            int area = length * width;
            cout << "The area of the rectangle is:: " << area;
        }
};
int main()
{
    int len, wid;
    cout << "Enter the length of the rectangle:" << endl;
    cin >> len;
    cout << "Enter the width of the rectangle: " << endl;
    cin >> wid;
    struct rectangle rec = rectangle(wid, len);
    rec.area();
}