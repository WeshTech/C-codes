#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter a number and click enter key\n";
    cin >> m;
    cout << "The hexadecimal equivalent is :: " << hex << m;
    cout << endl;
    cout << showpos  << dec << m;
}