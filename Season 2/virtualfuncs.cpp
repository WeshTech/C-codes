#include <iostream>
using namespace std;
class enemy
{
    public: 
        virtual void attack()
        {}
};
class ninja : public enemy
{
    public:
        void attack()
        {
            cout << "I am the ninja !!!!" << endl << endl;
        }
};
class monster : public enemy
{
    public:
        void attack()
        {
            cout << "I am the monster !!!!" << endl << endl;
        }
};
int main()
{
    cout << "Welcome to virtual functions " << endl << endl;
    ninja n;
    monster m;
    enemy *kill1 = &n;
    enemy *kill2 = &m;
    cout << "Printing is about to happen in this program" << endl << endl;
    kill1->attack();
    kill2->attack();
    cout << endl << endl <<"The values have been printed in the console " << endl << endl;
}