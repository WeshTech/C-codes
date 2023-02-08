#include <iostream>
using namespace std;

class bank
{
    public:
    int id;
    int account = rand() * rand();
    string name;
    public:
    void print()
    {
        cout << name << endl;
        cout << id << endl;
        cout << account << endl;
    }
};
int main()
{
bank david;
cout << "Enter the name of the customer" << endl;
getline(cin,david.name);
cout << "Enter the id number of the customer" << endl;
cin >> david.id;
cout << endl << endl << endl;

david.print();
}