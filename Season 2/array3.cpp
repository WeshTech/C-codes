#include <iostream>
using namespace std;
int main()
{
    int array[10];

        int i;
    for (i = 0; i < 10; i++)
    {
        cout << " Enter number " << i+1 << endl;
        cin >> array[i];
    }
    int j;
    for (j = 0; j < 10; j++)
    {
        cout << "The numbers entered by the user are " << endl << endl;
        cout << array[j] << endl << endl;
    }
}