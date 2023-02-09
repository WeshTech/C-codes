#include <iostream>
using namespace std;
int main()
{
    int count1 = 10;
    int count2 = 20;
    cout << "Count 1 in the outer loop is" << count1;
    {
        count1 = 200;
        cout << endl
            << "Count 1 in the inner loop is" << count1;
            count2 += count1;
            cout << endl;

    }
    cout <<"count 1 in the outer loop  = " << count1
        << endl;
    
        return 0;
}