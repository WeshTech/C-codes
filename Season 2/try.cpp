#include<iostream>
using namespace std;
int main()
{
    cout << "Welcome to mobile banking" << endl << endl;
    int number;
    cout <<"Enter a number and click enter to proceed" << endl << endl;
    cin >> number;
    try
        {
            if (number > 999)
                {
                    throw(number);
                }
        }
        catch (int f)
        {
            cout << "We have realized that you have entered a number that is greater than 999 kindly note that we do not allow choices that"
                << "are greater than 9999 your choice will be changed to 9999 " << endl << endl;
                number = 9999;
            
        }
        cout << "The changed number is::: " <<  number << endl << endl << endl;
        printf("\t\t\t\t\t\tWe appretiate your participation in the exercise\n\n\n\n");
    
}