#include <iostream>
using namespace std;
int min(int arr[],int size);
int main()
{
    int array[6] = {65,76,45,87,44,12};
    int x = min(array,6);


}
int min(int arr[],int size)
{
    int m,min;
    min = arr[0];
            for (m = 1; m < size; m++)
                    {
                        if (arr[m] < min)
                            {
                                min = arr[m];
                            }

                    }
            cout << "The min number is " << min;
}