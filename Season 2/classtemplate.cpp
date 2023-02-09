#include<iostream>
using namespace std;

template <typename T>
class weight
{
    private:
        T kg;
    public:
         void set (T x)
            {
                this->kg = x;
            }
        T print ()
        {
            return kg;
        }
};
int main()
{
    cout << "Welcome to class template handling in c++ programming" << endl << endl;
    weight<float>obj;
    obj.set(356.787);
    cout << "The variable you entered is "<< obj.print() << endl << endl << endl << endl;
}