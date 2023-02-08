#include <iostream>

using namespace std;

class student
{
    public:
        int num;
        int marks;
        public:
        student & assign(int num)
        {
            this->num = num;
            return *this;
        }
        void display()
        {
            cout << "The value of num is:: " << num << endl;
        }
};




int main()
{
    student s1;
    s1.assign(100).display();
}
