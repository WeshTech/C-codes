#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the value of x" << endl;
    cin >> x; cout << endl;
    while (x > -5)
    {
        cout << x << endl;
        printf("\t\t");
        x--;
    }
    return 0;
}