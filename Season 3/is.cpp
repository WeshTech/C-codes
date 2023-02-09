#include <iostream>
using namespace std;
int main()
{
    int number;
    cout <<"Enter a number between 50 and 100";
         cout << endl;
    cin >> number;
    cout << endl;
    if (number <50)
        cout << "invalid number less than 50!!!" << endl;
    if (number >100)
        cout << "Invalid number greater than 100!!!" <<  endl;

    cout << "The number is valid " << endl << "The number you entered is " << number << endl;
}