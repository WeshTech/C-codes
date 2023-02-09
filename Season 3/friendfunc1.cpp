#include <iostream>

using namespace std;

class stud
{
    friend void printer(stud &object);
    private:
        int age;
        
    public:
        stud(int age) : age(age) {};
    void print()
    {
        cout <<"The value of age is " << age << endl << endl;
    }
};
void printer(stud &object)
{
    object.age *= 2;
    cout << "The naew age is " << object.age << endl << endl;
}
int main()
{
    int y;
    cout << "Enter your age and click enter:" << endl << endl;
    cin >> y;
    stud david(y);
    david.print();
    printer(david);
    david.print();

}