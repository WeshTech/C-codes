#include <iostream>
using namespace std;

class formula
{
    public:
    int speed;
    int pickup;

    public:
    formula(int s, int p)
    {
        cout << "This is a constructor" << endl << endl;
        speed = s;
        pickup = p;
    }
    void display()
    {
        cout << "Speed is " << speed << endl << endl;
        cout <<"Pickup is :: " << pickup << endl;
    }
    ~formula()
    {
        cout << "This is a destructor" << endl << endl;
    }

};





int main()
{
    formula f(370, 4);
    f.display();
    cout <<"Testing the speed:: " << f.speed << endl;
    cout << "Testing the pickup:: " << f.pickup << endl;
    return 0;
}