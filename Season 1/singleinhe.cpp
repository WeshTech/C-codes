#include <iostream>
using namespace std;

class bank
{
    public:
        void print()
        {
            cout << "Welcome to KCB bank we are here to serve you " << endl;

        }
};
class child :public bank
{
    public:
        void echo()
            {
                cout <<"I am in the child class " << endl << endl;
            }
};
class another : public child
{
    public:
    void give()
    {
        cout << "The number of the letters is given " << endl << endl;
    }
};

int main()
{
    another david;
    david.print();
    david.echo();
    david.give();
}