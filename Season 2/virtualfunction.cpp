#include <iostream>
using namespace std;
class enemy
{
    public:
        virtual void attack(){};
};
class ninja : public enemy
{
    public:
        void attack()
        {
            cout << "I am a ninja and am going to kill you " << endl << endl;
        }
};
class monster : public enemy
{
    public:
        void attack()
        {
            cout << "I am a monster and i am going kill you " << endl << endl;
        }
};
int main()
{
    ninja n;
    monster m;
    enemy *kill1 = &n;
    enemy *kill2 = &m;
    kill1-> attack();
    kill2-> attack();
}