#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    char name[100];
    cout << "Enter a name and click enter to proceed" << endl;
    cin >> name;
    cout  << endl <<"You have entered the following string  " << name;
    gets(name);
    cout << endl << "The entered name is now  " << name << endl <<endl;
}