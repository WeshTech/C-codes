#include <iostream>

using namespace std;

    class students
    {
        public:
        int id;
        string name;
    };

int main()
{
    students david;
    
    cout << "Enter the name of the student " << endl << endl;
    getline(cin, david.name);
    cout << "Enter the registration number of the student" << endl << endl;
    cin >> david.id;
   
   cout << "The name of student " << david.id << " is " << david.name << endl << endl << endl;

}