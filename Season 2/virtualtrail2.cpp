#include <iostream>
using namespace std;
class king 
{
    public:
        void print()
        {
            cout << "I am in the king function member " << endl << endl;
        }
};
class queen : public king
{
    public:
        void print()
        {
            cout << "I am in the queen class " << endl << endl;
            cout << "Queen " << endl << endl;
        }
};
class child : public king
 {
    public: 
        void print()
        {
            cout << "I am in the child class " << endl << endl;
            cout << "Child "<< endl << endl;
        }
 };
 int main()
 {
    cout << "Welcome to the main function " << endl << endl;
    queen *kin;
    queen joy;
    child felix;
    kin = &joy;
    kin->print();

 }