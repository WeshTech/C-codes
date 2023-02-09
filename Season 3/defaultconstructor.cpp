#include <iostream>
using namespace std;

class book
{
    private:
    int pages;

    public:
    book()
    {
        pages = 250;
        cout << "The name of the book is compounded" << endl << endl;
        cout << "Number of page:" << pages << endl;
    }
};
int main()
{
    book b;
}