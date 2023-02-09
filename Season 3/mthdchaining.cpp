#include <iostream>

using namespace std;

class students
{
    private:
        int num;
    public:
        
    students & assign(int num)
    {
        this->num  = num;
        return *this;
    }
    void display()
    {
        cout << "The value is:: " << num << endl;
    }
};

int main()
{
    students kik;
    kik.assign(100).display();
}