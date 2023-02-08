#include <iostream>
using namespace std;
int print(int arr[],int size);
int main()
{
    int array[9] = {67,54,34,21,23,56,87,88,94};
    print(array,9);

}
int print(int arr[],int size)
{
    int k;
    for (k = 0; k < size; k ++)
            {
                cout << "The number entered is  " << arr[k] << endl << endl;
            }


}