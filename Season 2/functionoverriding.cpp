#include <iostream>
using namespace std;
int called(int y);
class king 
{
    public:
        
    void print()
    {
        cout << "I have not been overidden i am original " << endl << endl;
    }
};
class child : public king
{
    public:
    void print()
    {
        cout << "Oh my God i have been Overwritten ,, You should cry " << endl << endl;
    }
};
int main()
{
    child felix;
    felix.print();
    const static int x = rand();
    cout << "I have guessed a random number and the random number is " << x << endl << endl;
    called(x);

}
int called (int y)
{
    cout << "I am testing the static number " << endl << endl;
    cout << "The number is::: " << endl << y;
}