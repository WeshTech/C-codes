#include <iostream>
using namespace std;
class king
{
    public:
    int tre;
        void three (int a, int b, int c)
        {
            int m = a + b + c;
            cout << "You have three children congratulations " << endl;
            cout << "Each child will be using 3284 shillings only" << endl << endl;
            
             tre = a +b + c;
            cout << "The total cost shall be the following number " << endl << tre << endl << endl << endl;
        }
        void three(int x, int y)
        {
            int towo;
            towo = x * y;
            cout << "The product of the numberes entered is " << endl << endl <<endl << towo << endl;
        }
        

};
int main()
{
    king david;
    int k,j,h,g,f,d,s;
    cout << "Enter the number of children you have " << endl;
    cin >> k;
            if (k == 2)
            {
                cout << "Enter the age of the firstborn in years " << endl;
                cin >> j;
                cout << "Enter the age of the second born " << endl;
                cin >> h;
                david.three(j,h);

            }
            else if (k == 3)
            {
                cout << "Enter the age of the firstborn " << endl;
                cin >> g;
                cout << "Enter the age of the first born" << endl;
                cin >> f;
                cout << "Enter the age of the third born" <<endl;
                cin >> d;
                david.three(g, f, d);
            }
}