#include <iostream>
using namespace std;
int main()
{
    class boxp{
        public:
        int length;
        int width;
        int height;

    }box;
    cout << "We are starting to enter the details of the box" << endl;
    cout <<"Enter the length of box 1" << endl;
    cin >> box.length;
    cout << "Enter the width of the box" << endl;
    cin >> box.width;
    cout << "Enter the height of the box" << endl;
    cin >> box.height;

    int volume;
    volume  = box.length * box.width * box.length;
    cout << "The volume of the box is " << volume <<"cm3";

}