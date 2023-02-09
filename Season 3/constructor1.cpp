#include<iostream>
using namespace std;

class book
{
    private:
    int mark1;
    int mark;

    public:
    book(int n, int m)
    {
        int sol = m * n;
        cout << "The product of the numbwers is:: " << sol;
    }
    

};

int main()
{
    book kok(10,12);
    return 0;

}