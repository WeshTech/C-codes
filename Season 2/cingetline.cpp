#include<iostream>
#include <cstring>

using namespace std;
int main()
{
    char buffer[20];
    cout << "Enter characters and click enter " << endl << endl;
    cin.getline(buffer, 50);
    cout << "Enter other characters and click enter to proceed " << endl << endl;
    char tell[25];
    cin.getline(tell, 50);
    cout << "We are now going to concatenate the characters that you have entered to have a uniform statement" << endl << endl;
    strcat(buffer, tell);
    cout << buffer << endl << endl;
    cout << tell << endl << endl << endl;

}