#include <iostream>

using namespace std;
void createreport(student *student);

class student
{
    public:
    string name;
    int id;

    student(string name, int id)
    {
        cout  << "The memory address is :: " << this << endl;
        this->name = name;
        this->id = id;
    }
    void increase_age()
    {
        this->id = this->id + 1;
    }
    void increase_and_output_id()
    {
        this->increase_age();
        cout << "new id::" << this->id << endl;
    }
    
};

int main()
{
    student student1("Lukas", 20);
    cout << "Student1 memory address " << &student1 << endl; 
    student1.increase_and_output_id();
}
