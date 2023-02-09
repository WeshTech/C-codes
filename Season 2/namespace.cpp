#include <iostream>
using namespace std;
#include <cmath>

namespace raw
{
    void print(double number)
    {
        cout << "The number entered by the user of the application is " << number << endl << endl << endl << endl;
    }
}

namespace david
{
    void print(double number)
    {
        number = round(number);
        cout << "The new rounded number is " << number << endl << endl;
    }
}
int main()
{
    double x;
    cout << "Enter a number and click enter to proceed " << endl;
    cin >> x;
    cout << "Calling the function in the raw namespace " << endl << endl;
    raw :: print(x);
    double y;
    cout << "Enter a number with 5 decimal places and click enter to proceed" << endl;
    cin >> y;
    cout << "Calling the print function in the david namespace " << endl << endl;
    david :: print(y);
}