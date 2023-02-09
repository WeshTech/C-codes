#include <iostream>
using namespace std;
class bankaccount
{
    public:
    int id;
    string name;
    int balance = 0;

    
    int deposit(int amount)
    {
     balance  = balance + amount;
    }
    int withdraw(int amount)
    {
        balance = balance - amount;
    }
};
int main()
{
    int choice,with;
    bankaccount David;
    cout << "to withdraw enter 1" << endl << "Press 2 to deposit cash into your account" << endl;
    cin >> choice;
    if (choice == 1)
            {
                cout << "Enter the amount to withdraw" << endl;
                cin >> with;
                David.withdraw(with);
                    if (David.balance == 0)
                        {
                            cout << "Isuffiscient funds in your Account to complete the transaction" << endl;
                        }
                        else
                        {
                            cout << "Transaction processed";
                        }
            }
}