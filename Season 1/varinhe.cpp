#include <iostream>
using namespace std;

class parent
{
    public:
        int id;
        int age;
    void print()
    {
        cout << "Age = " << age << "Id = " << id << endl;
    }
        parent(int id, int age)
        {
            this->id = id;
            this->age = age;
        }

};
class child : public parent
{
    child(int id, int age)
    {
        this->id = id;
        this->age = age;
    }
    
};
int main()
{
    int x, y;
        cout << "Enter the id of the person to be registred " << endl;
        cin >> y;
        cout << "Enter the age of the person to be registred " << endl;
        cin >> x;
        child david(y,x);
        david.print();

        
}