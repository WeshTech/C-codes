#include <iostream>
#include <string.h>
using namespace std;

class registration
{
    private:
        int id;
        int phonenumber;
        int birthid;
        string firstname, secondname, surname;
        
        
        registration(int id,int phonenumber,string firstname, string secondnamme, string surname)
            {
                this->id = id;
                this->phonenumber = phonenumber;
                this->firstname = firstname;
                this->secondname = secondname;
                this->surname = surname;
            }        
        
};
int main()
{
    int i,j;
        for(i = 0; i < 5; i++)
            for (j = 0;j < 5; j++)
            {
                printf("\t\t");
                cout << "*****" << endl;
            }
    int choice;
        do
        {
            cout << "To register a new account press 1" << endl;
            cin >> choice;
                if (choice > 1)
                    {
                        cout << "You have chosen the wrong system to mess with" << endl;
                        cout << "Use your eyes well to check the correct instructions" << endl;

                    }
        }
        while (choice >1);
        switch (choice)
        {
            case 1:
                    cout << "Enter your id number" << endl;
                    int id;
                    cin >> id;
                    char fname[10];
                    cout << "Enter your first name " << endl;
                    cin >> fname;
                    string sname;
                    cout << "Enter your second name and click enter" << endl;
                    getline(cin, sname);
                    cout << "Enter your surname and click enter " << endl;
                    string srname;
                    getline(cin,srname);
                    char reg[14] ="registration.";
                    strcat(reg, fname);
                    registration fname;
                    
        }
        
}