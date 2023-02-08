#include <iostream>
int  PIN = 5677;
using namespace std;
int main()
{
    int i;
        for (i = 0; i < 10; i++)
        {
            cout << "i =" << i << endl;
            if (i == 5)
            {
                
                cout << "We have loged you out of this account we have noted some illegular actvity in your account" << endl << endl; cout << " please enter your pin to proceed \n";
                int pin;
                cin >> pin;
                if (pin != PIN)
                {
                    printf("incorrect pin!!!\n\n");
                    cout << "Enter your pin again one more trail" << endl;
                    cout << "Would you like to reset your pin?" << endl << endl;
                    int chpin;
                    cout << "Press 1 to reset your pin" << endl;
                    cin >> chpin;
                        if (chpin == 1)
                        {
                            printf("Kindly enter your id number");
                            int id;
                            cin >> id;
                            if (id == 41029466)
                            {
                                printf("Enter your preffered pin");
                                int npin;
                                cin >> npin;
                                int *ptr;
                                ptr = &PIN;
                                int *ptr2;
                                ptr2 = &npin;
                                *ptr2 = *ptr;
                                        cout << "Pin modified successfuly" <<endl <<endl;
                                        cout << "Enter your pin to complete the transaction" << endl;
                                        cin >> pin;
                                        if (pin != PIN)
                                        {
                                            break;
                                        }
                                        else
                                        {
                                            continue;
                                        }
                            }
                                else
                                {
                                    cout << "You have entered the wrong id number" << endl;
                                    cout << "Your account has been locked contact the customer care for guidance" << endl << endl << endl;
                                    break;
                                }
                        }
                    cin >> pin;
                        if(pin != PIN)
                        {
                            printf("Your account has been locked\n\n");
                            return 0;
                        }
                }
                else 
                {
                    
                    continue;
                
                }
                }
            }
        }
