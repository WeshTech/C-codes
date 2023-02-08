#include <iostream>
using namespace std;



    class bar
    {
        private:
        int drink;
        int people;

        public:
        bar(int d, int p)
        {
            drink = d;
            people = p;
        }

        int cash()
        {
            return drink * people;

        }
    };






int main()
{
    bar b(40, 35);
    
    return 0;

}