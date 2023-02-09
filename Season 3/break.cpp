#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for (i = 0; i < 3; i++)
        {
            cout << i << endl;
            for (j = 0; j < 4; j++)
                {
                    
                    if ((i == 2)&&(j == 3))
                    {
                        cout << j << endl;
                        break;
                    }
                }
        }
}