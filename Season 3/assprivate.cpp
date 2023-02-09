#include <iostream>
using namespace std;


class bank
{
    private:
        int id;
        int pin;
    public:
    bank(int d, int p)
    {
        id = d;
        pin  = p;
                if ((id != 0) && (pin != 0))
                {
                    cout << "Details recorded successfuly" << endl;
                }
                else 
                {
                    cout << "Deteils have not been captured kindly reenter the deatails" << endl;
                }
    }
};


int main()
{
    
    cout << "Welcome to the confidential details entry " << endl << endl;
    int idno, bpin;
    cout << "Enter your id number " << endl;
    cin >> idno;
    cout << "Enter the pin number "<< endl;
    cin >> bpin;

bank cus(idno, bpin);


};