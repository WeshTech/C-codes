#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char name;
    cout << "Enter a character to test" << endl;
    cin >> name;
    cout << endl;
    int x;
    x = isupper(name);
    if (x == 1)
        cout << "You entered an uppercase letter" << endl;
        
    else
        cout << "You entered a lowercase letter"
            << endl;
    
    cout << "A character was entered";

}