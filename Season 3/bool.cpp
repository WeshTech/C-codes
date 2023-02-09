#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your name" << endl << endl;
    string name;
    getline(cin, name);
    cout << "Enter your gender as M or F" << endl << endl;
    char gender;
    cin >> gender;
    switch(gender)
    {
        case 'M':
            cout << "Your gender is male" << endl << endl;
            cout << "Verifying your name" << endl << endl;
        case 'F':
            cout << "Your gender is female" << endl << endl;
            cout << "Verifying your name" << endl << endl;
        default:
            cout << "Do you prefer not to say your gender???" << endl;
    }
    bool accept;
    
        int tries = 1;
                    while (tries < 4)
                    {
                        cout << "Do you want to proceed (Y or N)?" << endl;
                        char answer = 0;
                        cin >> answer;
                            switch (answer)
                                {
                                    case 'y':
                                        return true;
                                    case 'N':
                                        return false;
                                    default:
                                        cout << "Sorry, i dont get that." << endl;
                                        tries++;
                                }
                    
    }
}