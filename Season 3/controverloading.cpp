#include <iostream>
using namespace std;

class overload
{
    private:
    int res;

    public:

    overload(int x, int y)
    {
        res = x * y;
    }
    overload(int x, int y, int z)
    {
        res = x + y + z;
    }
    int result()
    {
        return res;
    }
};





int main()
{
    overload one(20, 4);
    overload two(50, 65, 30);

cout << "Results of multiplication is:: " << one.result() << endl;
cout << "Results of addition is:: " << two.result() << endl << endl;


    return 0;

}