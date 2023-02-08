#include <iostream>

using namespace std;
int main()
{
    string name;
    cout << "Enter your name and click enter\n";
    getline(cin, name);
    cout << "Hello "<< name << " Welcome to c++ prigramming strings,,, U good???";
    string password;
    cout << "Enter a password of atleast 8 characters\n";
    getline( cin , password);
            if (password.length() != 8)
                cout << "Your password is not eight charecters";
}