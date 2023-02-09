#include <iostream>
using namespace std;
int main()
{
    int i,j;
        for (i = 0; i < 3; i++)
        {
            printf("The outer loop");
                for (j = 0; j <= 4; j++)
                {
                    cout << "The inner loop" << endl;
                }
        }
}