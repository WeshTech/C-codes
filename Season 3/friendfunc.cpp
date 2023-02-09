#include <iostream>

using namespace std;

class stud
{
    friend void printer(stud &object);
    private:
        int age;
            int increament()
            {
                age += 5;
            }
    public:
        stud(int age) : age (age) {};
            
        void print()
        {
            cout << "The value of age is  " << age << endl;
        }
};
void printer(stud &object)
{
    object.age *= 2;
    cout << "The multiplie value is " << object.age;
}

int main()
{
    stud david(18);
    david.print();
    printer(david);

    
}