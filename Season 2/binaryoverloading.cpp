#include <iostream>
using namespace std;
class king 
{
    public:
        int age;
    
        king(int b)
        {
            this->age = b;
        }
        king operator +(const king  &num)
        {
            return (this->age + num.age);
        }
};
int main()
{
    int m,n;
    cout << "Enter the value of m " << endl << endl;
    cin >> m;
    cout  << "Enter the value of n " << endl << endl;
    cin >> n;
    king david(n);
    king alex(m);
    king erick = david + alex;
    cout << "The final value after overloading the pointer is " << erick.age << endl;
}