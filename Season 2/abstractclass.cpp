#include <iostream>
using namespace std;
class king
{
    virtual void attack() = 0;
};
class queen : public king
{
    public:
        void attack()
        {
            cout << "I am a queen and i can attack the king" << endl << endl;
        }
};
class student : public king
{
    public:
        void attack()
        {
            cout << "I am a student and i dont attack people " << endl << endl;
        }

};
class whitshee : public king
{
    public:
        void attack()
        {
            cout << "My name is Whitney and i love David " << endl << endl;
        }
};
int main()
{
    whitshee felix;
    student maua;
    queen mrs;
    king *david;
    david = &maua;
    king * goli;
    goli = &felix;
    king *duba;
    duba = &mrs;
    mrs.attack();
    maua.attack();
    felix.attack();

    

}