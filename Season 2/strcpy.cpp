#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char fruit[] = "mango";
    char buffer[20];
do
{
    cout << "Enter your favourite fruit " << endl;
    cin >> buffer;
} while (strcmp(fruit, buffer)!=0);
cout << "You have gotten the correct answer " << endl << endl << endl;
   
}