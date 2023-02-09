#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    cout << "Welcome to c++ file management " << endl << endl;
    ofstream filestream("text2.txt");
            if (filestream.is_open())
                    {
                        cout << "File opening success " << endl << endl <<  endl;
                        cout << "Enter the text you want to be written in the file to be created " << endl;
                        char input[200];
                             cin.getline(input,150);
                            filestream << input;
                        filestream.close();

                    }
            else
                    {
                        cout << "File opening error" << endl;
        
                    }
            cout << "\t\t\tWe now want to read the characters from the file" << endl << endl;
        ifstream file("text2.txt");
                if (file.is_open())
                    {
                        cout << "File open successful" << endl;
                        string str;
                            while(getline(file,str))
                                {
                                    cout << str << endl;
                                }
                    }
                else
                        {
                            cout << "File opening Error " << endl << endl <<endl;
                        }
}