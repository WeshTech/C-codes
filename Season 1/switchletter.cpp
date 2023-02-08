#include <iostream>

using namespace std;

int main()
{
    char answer;
    do{
    cout << "Enter a character and press enter to proceed" << endl;
    cin >>  answer;
    fflush(stdin);
        if (answer == 'y') 
                cout << "You have chosen yes to proceed" << endl;
            
        else if (answer == 'n')
                cout << "You have chosen no" << endl;
            
        else
                cout  << "Kindly check your entry you might have chosen an invalid answer" << endl << endl;
    }
    
    while ((answer != 'y') || (answer != 'n'));
}