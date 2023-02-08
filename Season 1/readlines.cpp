#include <iostream>
using namespace std;
int main()
{
    char names[100];
    cout << "Enter a sentence and click enter" << endl;
    cin.get(names, 100);
    cout << "The string you entered is " << endl;
    cout << names <<endl << endl << endl;
}