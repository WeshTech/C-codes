#include <iostream>

using namespace std;

class oldest
{
    public:
        int maths;
        string name;
    public:
        void print()
        {
            cout << "The student " << name << "Has scored " << maths << endl << endl;
        }
};
class old : public oldest
{
    public:
        int geo;
        int phyc;
    public:
        void tell()
        {
            cout << "I am a function called tell and am printing values" << endl;
        }
};
class young : public old
{
    public:
        int chem;
        int bio;
        int total;
    public:
    int calc(){
        total = maths + geo + phyc + chem + bio;
        cout << "The total score for the fed subjects is " << total << endl;
    }

};
int main()
{
    cout << "Welcome to multilevel inheritance " << endl << endl;
    young david;
    cout << "Enter the marks scored in maths " << endl;
    cin >> david.maths;
    cout << "Enter the marks scored in Geography " << endl;
    cin >> david.geo;
    cout << "Enter the marks scored in physics " << endl;
    cin >> david.phyc;
    cout << "Enter marks for chemistry " << endl;
    cin >> david.chem;
    cout << "Enter the marks scored in biology "<< endl;
    cin >> david.bio;
    david.print();
    david.tell();
    david.calc();
}

