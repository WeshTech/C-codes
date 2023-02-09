#include<iostream>
using namespace std;
class ope
{
    private:
            int age;
    public:
    ope(int x)
    {
        this->age = x;
    }
    void operator ++ ()
    {
        age = age + age;
    }
    
    void print()
    {
        cout << "The new value after changing the operator function is " << age << endl << endl;
    }
};
int main()
{
    ope alex(45);
    ++ alex;
    alex.print();
    cout << "This is the result of changing the operator" << endl << endl;
}