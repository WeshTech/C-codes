#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    cout << "We are creating a new file and write some new text in the file " <<endl << endl;

    ofstream filestream("text.txt");

            if (filestream.is_open())
                {
                    cout << "File created successfully" << endl << endl << endl << endl;

                    filestream << "Welcome to file management in c++ programming language " << endl << endl << endl;

                    filestream << "Are you enjoying managing files using c++ programming language ??? " << endl << endl;

                    filestream.close();
                }
                else
                        cout << "The file was not created kindly rerun the program again and if thwe problem persists then contact the customer care "<< endl << endl;
}