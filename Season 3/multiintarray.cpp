#include <iostream>
using namespace std;
int main()
{
    int array[3][4];
    int i,j;
        for (i = 0; i < 3; i++)
        {
            //cout << "loop::" [i] << endl;
            for (j = 0; j < 4; j++)
                {
                    cout << "loop::"<< i  << j  << endl;
                    cout << "Enter the number "  << endl << endl;
                    cin >> array[i][j];
                }
        }
}