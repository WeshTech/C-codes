#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream filestream("text.txt");

        if (filestream.is_open())
                cout << "The file has been created successfully " << endl << endl;
        else
            cout << "The file has not been created kindly try running the priogramm  again !!" << endl << endl;
}