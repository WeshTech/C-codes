#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    class student
    {
        public:
            int id;
            string name;
                void printname()
                {
                    cout << name;
                    cout << "I am in the class that was created" << endl;
                }
                void printid();

    };
    void student::printid()
    {
        cout << "The id entered is " << id << endl;
    }
int main()
{
    cout << "Enter the student id and the student name " << endl;
    student David;
    cout << "Id number first " << endl << endl;
    cin >> David.id;
    cout << "Enter the student name " << endl << endl;
    cin >> David.name;
    David.printname();
    cout << endl;
    David.printid();

}