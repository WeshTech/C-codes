#include <iostream>
#include<windows.h>

using namespace std;
#define PIN 5641
int BALANCE = 5000;

#define AMOUNT 0
int main()
{
    int i,j;
        for (i = 1; i < 2; i++)
            {
                cout << "\t Welcome to the banking system we value you " << endl;
                for (j = 0; j < 5 ; j++)
                {
                    cout << "\t\t";
                    cout << " Updating menu please wait....\t"<< endl;
                }
            }
    int choice;
            do
            {
                cout << "To check balance enter number 1" << endl;
                cout << "To withdraw money click 2" << endl;
                cout << "To deposit enter 3 "<< endl;
                cin >> choice;
                    if ((choice < 1) || (choice > 3))
                            {
                                cout << "\t\tYou have entered a wrong choice kindly read the instructions kinely "<< endl << endl;
                            }
            }
            while ((choice < 1) || (choice > 3));
        if (choice == 1)
                {
                    cout << "Enter your pin to check your current balance " << endl;
                    int pin;
                    cin >> pin;
                    int count = 1;
                        if (pin != PIN)
                        {
                            
                                
                                    cout << "You have entered the wrong pin,,, you have two more trails " << endl;
                                    cout << " \t\tEnter your pin again !!" << endl;
                                    cin >> pin;
                                    count ++;
                                            if (pin != PIN)
                                                {
                                                    cout << endl << endl << "You have entered the wrong pin,,, you have one more trail your account will be blocked " << endl;
                                                    cout << " \t\tEnter your pin again !!" << endl;
                                                    cin >> pin;
                                                    count++;
                                                }
                                                if ((pin != PIN) && (count == 3))
                                                {
                                                    cout <<endl << endl << endl << "Your Account has been blocked please contact David he loves you and he will solve that for you "<< endl << endl << endl << endl;
                                                }
                                
                        }
                        else
                            {
                                cout << "Correct pin  please wait as we check your balance .... " << endl;
                                Sleep(4000);
                                cout << "\t\t\t\n\nYour balance is " << BALANCE << "  KES  " << "Thankyou for banking with us" << endl;
                                cout << "\n\n";
                                int back;
                                        do
                                        {
                                            cout << "Press 1 to get back to the main menu " << endl;
                                            cout << "Press 2 to quit " << endl;
                                            
                                            cin >> back;
                                                if (back == 1)
                                                {
                                                    main();
                                                }
                                                else if ((back < 1) || back >2)
                                                    {
                                                        printf("Dear esteemed customer take time to read the instructions keenly\n\n");
                                                    }
                                        }
                                        while ((back < 1) || back > 2);
                                                

                                                
                            }                           
                            
                }
        else if (choice == 2)
        {
            cout << "Enter the amount you want to withdraw " << endl;
            int cash;
            cin >> cash;
             int balance = (BALANCE - 50) -cash;
                if (balance < 0)
                    {
                        cout << "\t\t\t\n\nYou do not have enough money to withdraw such amount kindly top up your account " << endl << endl << endl;
                        main();
                    }
                else
                {
                    cout << "\n\n\t\tPrecessing transaction please wait...... \t\t" << endl;
                    Sleep(3000);
                    cout << "\n\nUpdating your bank account.....\n\n";
                    Sleep(2000);
                    balance = (BALANCE - 50) - cash;
                    int *remptr = &balance;
                    int *balptr = &BALANCE;
                     *balptr = *remptr;
                    cout << "\t\tTransaction pending ,, your new balance will be " << BALANCE << "  KES  "  << endl << endl;


                }
                cout << "Enter your pin to complete the transaction  " << endl;
                    int pinw;
                    cin >> pinw;
                    int coun = 1;
                        if (pinw != PIN)
                        {
                            
                                
                                    cout << "You have entered the wrong pin,,, you have two more trails " << endl;
                                    cout << " \t\tEnter your pin again !!" << endl;
                                    cin >> pinw;
                                    coun ++;
                                            if (pinw != PIN)
                                                {
                                                    cout << endl << endl << "You have entered the wrong pin,,, you have one more trail your account will be blocked " << endl;
                                                    cout << " \t\tEnter your pin again !!" << endl;
                                                    cin >> pinw;
                                                    coun++;
                                                }
                                                if ((pinw != PIN) && (coun == 3))
                                                {
                                                    cout <<endl << endl << endl << "Your Account has been blocked please contact David he loves you and he will solve that for you "<< endl << endl << endl << endl;
                                                }
                        }
                        else
                            {
                                cout << "\t\t\t\n\n\nTransaction completed thankyou for banking with us \n\n " << endl << endl;
                                main();
                            }
        }
        else if (choice == 3)
            {
                 cout << "Enter the amount you want to daposit " << endl;
            int cashd;
            cin >> cashd;
             int balance = (BALANCE - 50) + cashd;
              
                    cout << "\n\n\t\tPrecessing transaction please wait...... \t\t" << endl;
                    Sleep(3000);
                    cout << "\n\nUpdating your bank account.....\n\n";
                    Sleep(2000);
                    balance = (BALANCE + cashd);
                    int *remptr = &balance;
                    int *balptr = &BALANCE;
                     *balptr = *remptr;
                    cout << "\t\tTransaction pending ,, your new balance will be " << BALANCE << "  KES  "  << endl << endl;


                }
                cout << "Enter your pin to complete the transaction  " << endl;
                    int pind;
                    cin >> pind;
                    int cound = 1;
                        if (pind != PIN)
                        {
                            
                                
                                    cout << "You have entered the wrong pin,,, you have two more trails " << endl;
                                    cout << " \t\tEnter your pin again !!" << endl;
                                    cin >> pind;
                                    cound ++;
                                            if (pind != PIN)
                                                {
                                                    cout << endl << endl << "You have entered the wrong pin,,, you have one more trail your account will be blocked " << endl;
                                                    cout << " \t\tEnter your pin again !!" << endl;
                                                    cin >> pind;
                                                    cound++;
                                                }
                                                if ((pind != PIN) && (cound == 3))
                                                {
                                                    cout <<endl << endl << endl << "Your Account has been blocked please contact David he loves you and he will solve that for you "<< endl << endl << endl << endl;
                                                }
                        }
                        else
                            {
                                cout << "\t\t\t\n\n\nTransaction completed thankyou for banking with us \n\n " << endl << endl;
                                main();
                            }
            }
            
            




