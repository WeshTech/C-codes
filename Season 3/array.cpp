#include <iostream>
using namespace std;
int main()
{
    int array[10] = {10,20,30,40,50,60,70,80,90,100};
    cout << array[0] << " " << array[1] << "  " << array[2] << " " << array[3] << " "<< array[4] << " "<< endl;
    array[3/2] = 88;
    cout << array[3/2] << "  " << endl;
    cout << array[1] << " " << endl;
}