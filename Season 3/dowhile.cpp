#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Enter the number of students you have" << endl;
    cin >> i;
    int count = 0;
    int stud = 11200;
    do
    {
        int maths, total = 0;
        cout << "Enter the score of  " << stud << endl;
        cin >> maths;
        total += maths;
        count ++;
        stud++;

        
    } while (count != i);
    
}

