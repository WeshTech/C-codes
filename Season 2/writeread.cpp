#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string read;
    ofstream filestream("text.txt");

        if (filestream.is_open())
                {
                    cout  << "Enter the text to be entred in the c++ file and click enter to proceed " << endl << endl;
                    string write;
                        getline(cin, write);
                    filestream << write;
                    filestream.close();
                }
        else
           { cout << "Error in opening the file!! " << endl << endl;}

        cout << "Reading the file created" << endl << endl << endl << endl;

       ifstream file("text.txt");
                if (file.is_open())
                        {
                            cout << "Your file has been opened successfully " << endl << endl << endl;
                            

                                while( getline (file,read))
                                    {
                                        cout << read << endl << endl;
                                    }
                                    file.close();
                        }
                else
                        {
                            cout << "File opening error" << endl << endl;
                        }
                return 0;
}