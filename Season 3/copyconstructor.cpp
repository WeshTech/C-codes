#include <iostream>

using namespace std;

class book
{
    public:
    int n;
    public:
    book(int set)
    {
        n = set;
    }

};
int main()
{
    int number;
    cout << "Enter a number to proceed " << endl;
    cin >> (number);
    book dk(number);
    cout << "You entered :: " << dk.n << endl << endl;
    book mk = dk;
    cout << "Number two:: " << mk.n << endl << endl << endl;

}