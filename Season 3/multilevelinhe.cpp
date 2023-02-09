#include <iostream>

using namespace std;

class chemistry
{
    public:
        int marksc;
        void chem()
        {
            cout << "Enter the marks scored in chemistry" << endl;
            cin >> marksc;
        }
};
class physics : public chemistry
{
    public:
        int phyc;
        void phycm()
        {
            printf("Enter the marks scored in physics\n");
            cin >> phyc;
        }
};
class maths : public physics
{
    public:
    int mathm,total;
        void mathmath()
        {
            cout << "Enter the marks scored in mathematics" << endl;
            cin >> mathm;
        }
        void result()
        {
            int total = mathm + phyc + marksc;
            cout << "The total marks is  " << total;
        }

};
int main()
{
    maths david;
    david.chem();
    david.phycm();
    david.mathmath();
    david.result();
    return 0;
}