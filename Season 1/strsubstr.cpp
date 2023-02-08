#include <iostream>

using namespace std;

int main()
{
    string name;
    cout <<"Enter your name and click enter to proceed\n";
    getline(cin, name);

    cout << name.substr(4);
}