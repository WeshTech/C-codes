#include <iostream>

using namespace std;

class students
{
    private: 
            int id;
    public:
            int math;
            int geo;
    students(int math, int geo)
    {
        this->math = math;
        this->geo = geo;
    }
    public:
        void print();
        void called();
};
 void students::print()
    {
        cout << "The marks in Geography is " << geo << endl;
        cout << "The marks in mathematics is:: " << math << endl;
        this->called();
    }
void students :: called()
{
    cout << "I have been involked by the this keyword in the print function " << endl << endl << endl; 
}







int main()
{
        int maths,geo;
    cout << "Enter the marks scored in mathematics" << endl;
    cin >> maths;
    cout << "Enter the marks scored in Geography" << endl;
    cin >> geo;
    students student1(maths, geo);
    student1.print();
   

}