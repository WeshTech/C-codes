#include <iostream>
using namespace std;
class parent
{
    public:
        void print()
        {
            cout <<"This is the most branded book in the world" << endl;

        }
};
class child
{
    public:
    void printer(){
        cout <<"I am in the child class " << endl;
    }
};
class final : public parent , public child        
{};
int main()
{
    final david;
    david.print();
    david.printer();
}