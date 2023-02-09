#include <iostream>
using namespace std;

template <typename t, typename s>
s add(t x, s y)
{
    return x + y;
} 
int main()
{
    cout << "Kindly note that we are using a function template " << endl << endl;
    cout << "Enter two numbers and click enter to proceed "<< endl;
    int m;
    cout << "Enter the first number and click enter to proceed" << endl;
    cin >> m;
    cout << "Enter the second number and click enter to proceed "  << endl << endl;
    double n;
    cin >> n;
    cout << "Using the template function " << endl << endl;
    cout << "The sum of the numbers entered is::" << add<double>(m,n) << endl;

}
