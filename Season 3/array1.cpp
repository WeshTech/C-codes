#include <iostream>
using namespace std;
int main()
{
    int i;
    int array[10];
    cout <<"Enter to different numbers" << endl;
        for (i = 0; i < 10; i++)
            {
                cout << "Enter a number " << i +1 << endl;
                cin >> array[i];
            }
            int j;
            cout << endl << endl << endl <<"Priting the entered Numbers" << endl;
                    for (j = 0; j < 10; j++)
                            {
                                cout << array[j] << endl;
                                        
                            }
            cout << endl << endl<< endl <<"Adjusting the numbers to produce a new list"<< endl << endl;
            int f;
                    for (f = 0; f < 10; f++)
                            {
                                cout << array[f] << endl;
                                        if (array[f] == 50)
                                            {
                                                
                                                array[f] =40000;
                                                
                                            }
                            }
            cout << "Printing the changed numbers" << endl << endl;
                int k;
                        for(k = 0; k < 10; k ++)
                            {
                                cout << array[k] << endl;
                            }
}
