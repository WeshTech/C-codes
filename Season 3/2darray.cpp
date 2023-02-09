#include <iostream>
using namespace std;
int main()
{
    int i,j;
    int array[2][2];
    cout << "Enter the digits int he 2d array"<<  endl << endl;
    for (i = 0; i <2; i++)
        {
            for (j = 0; j < 2; j++)
                    {
                        cout << "Enter the number at position Array[" << i << ']' << '[' << j <<']' << endl;
                        cin >> array[i][j]; 
                    }
        }
        cout << "Printing the numbers entered by the user" << endl << endl << endl;
    int k,l;
        for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        {
                            cout <<"The number at position array["<< i << ']' << '[' << j <<']' << " is " << array[k][l] << endl << endl;
                        }
                }
}