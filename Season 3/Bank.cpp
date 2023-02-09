#include <iostream>
#include <string.h>
using namespace std;
class bank
{
    public:
    int idno;
    int PIN;
    int balance;
    char name[];
    public:
    int withdraw(int x)
        {
            balance -= x;
            cout << endl << endl << "Your new balance will now be " <<balance <<"SHillings only" << endl;
        }
    int deposit(int y)
        {
            balance += y;
        }
};

int main()
{
cout << "Welcome to Equity bank system" << endl << endl;
cout << "Press 1 to register a new bank account" << endl << endl;
int number;
bank david;
cin >> number;
    if (number == 1)
        {
            
            cout << "Welcome to equity bank system" << endl << endl;
            cout << "Enter your full names" << endl << endl;
             cin>> david.idno;
            cout << "Enter your ID number" << endl << endl;
            cin >> david.idno;
            cout << "Enter your first deposit" << endl << endl;
            cin >> david.balance;
        }
    cout << "press 1 to withdraw" << endl<< "Press 2 to deposit" << endl;
    int ch;
    cin >> ch;
    if (ch == 1)
    {
        cout << "Enter the amount you want to withdraw" << endl;
        int mcash;
        cin >> mcash;
            if(mcash < david.balance)
            {david.withdraw(mcash);}
            else
            {
                cout << "Not enough funds to withdraw the amount kindly update your bank account" << endl;
            }
    }

}