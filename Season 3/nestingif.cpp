#include <iostream>
using namespace std;
int main()
{
    char letter;
    cout << "Entera character\n";
    cin >> letter;
    if (letter == 'A')
        {
            if (letter <= 'z')
            {
                cout << "You entered an uppercase latter."
                    << endl;
                    return 0;
            }
        }
        if (letter >= 'a')
                if (letter <= 'z')
                {
                    cout << "You entred a lowercase letter."
                        << endl;
                        return 0;
                }
                cout << "You did not enter a letter." << endl;
                return 0;

        
}