#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter 1 to choose a drink" << endl;
    cout << "Enter 2 to quit" << endl;
    cin >> number;
    if (number == 1){
    char choice;
    do{
    cout << endl;
    cout << "Enter c for coffee" << endl;
    cout << "Enter j for juice" << endl;
    cout << "Enter a for alcohol" << endl;
    cout << "Enter w for water" << endl;
    cout << "Enter p for porrige" << endl;
    cout << "Enter m for milk" << endl;
    cin >> choice;

    switch (choice)
    {
        case 'c':
            cout << "You have chosen to take coffee" << endl;
            break;
        case 'j':
            cout << "You have chosen to take juice" << endl;
            break;
        case 'a':
            cout << "You have chosen to take alcohol !! be careful do not drink and drive" << endl;
            break;
        case 'w':
            cout << "You have chosen to take water best choce!!! take care of your haealth" << endl;
            break;
        case 'm':
            printf("You have chosen to take milk very good for your health");
            break;
        case 'p':
            printf("You have chosen to take porrige!! stay near a toilet because you will need it alot");
            break;
        default:
        cout << "Please take time to read the instructions provided on the screen !!!!" << endl << endl;
        break;
    }
    }
    while (choice != 'c'|| choice != 'j' || choice !='w' || choice != 'm' || choice != 'p');
    }
    
    else
    {
        cout << "You have chosen to exit,,, have a good day ahead " << endl;
        cout << "If you change your mind ,,, i will be waiting for you" << endl << endl <<endl <<endl << endl;
    }

}