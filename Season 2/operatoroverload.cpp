#include <iostream>

using namespace std;

class load
{
    private:
        int num;
    public:
        load(int num)
        {
            this->num = num;
        }
        void operator ++ ()
        {
            num = num + 2;
        }
        void print()
        {
            cout << "The new number after overloading the operator is " << num << endl << endl;
        }
};
int main()
{
    int m;
    cout << "Enter a number and click enter to proceed " << endl;
    cin >> m;
    load david(m);
    ++ david;
    david.print();
    cout << "The correct number has been printed please confirm that the number is correct " << endl << endl << endl;
}