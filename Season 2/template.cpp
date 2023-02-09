#include <iostream>
using namespace std;

template <typename T >
T find_max(T a, T b)
{
    if (a > b)
        return a;
    else return b;
}
double find_max(double a, double b)
{
    if (a>b)
        return a;
    else{
        return b;
    }
}
int main()
{
    int x =666;
    int y = 666;
    int sol = find_max<int>(x,y);
    cout << sol;
}
