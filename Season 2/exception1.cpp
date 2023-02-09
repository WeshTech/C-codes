#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the numinator and click the enter button to proceed " << endl;
    int num;
    cin >> num;
    cout << "Enter the denominator and click enter to proceed " << endl << endl;
    int denum, output;
    cin >> denum;
        try
        {
            if (denum == 0)
                {
                    throw denum;
                }
            else
                {
                    int output = num / denum;
                    return output;
                }
        }
        catch (int y)
        {
            cout <<"Any number divided by 0 is 0 " << endl << endl << endl;
        }
        
        
        
}