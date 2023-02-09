#include <iostream>
using namespace std;
int main()
{
    enum week {monday, tuesday, wednesday, thursday, friday, saturday, sunday};
    week day;
    
    day = friday;
    cout << "Day: " << day + 1;
}