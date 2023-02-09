#include <iostream>
#include <cctype>
#include <iomanip>
#include <string.h>

using namespace std;
int main()
{
    char username[15],password[15];
    int x;
    char name[] = "Engineerdavid";
    printf("Enter your username and click enter");
    cout << endl;
    fflush(stdin);
    gets(username);
    fflush(stdin);
    if (username != "Engineerdavid")
    {
        cout << "Your username is not recognised in the system" << endl;
    }
    else
    {
        cout << "You can now progress to the system requirements" << endl;
    }
    cout << "You have entered " << username << "as your username" << endl;
    cout << "Enter your password and click enter to proceed" << endl;
    gets(password);
    cout << "You have entered " << password << "as your password" << endl;


}