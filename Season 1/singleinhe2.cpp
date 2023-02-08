#include <iostream>
using namespace std;
class records
{
    public:
        int coke;
        int fanta;
        int stoney;
    public:
    void get_coke()
    {
        cout << "Enter the number of coke drinks drank by the customers" << endl;
        cin >> coke;

    }
    void get_fanta()
    {
        cout << "Enter the number of fanta drinks drank by the customers" << endl;
        cin >> fanta;
    }
    public:
    void get_stoney()
    {
        cout << "Enter the number of stoney drunk by the customers" << endl;
        cin >> stoney;
    }
};
class capture : public records
{
    public:
    int coke_totals, fanta_totals, stoney_totals, total;
            void calc()
            {
                coke_totals = coke * 47;
                fanta_totals = fanta * 53;
                stoney_totals = stoney * 66;
                total = coke_totals + fanta_totals + stoney_totals;
                
            }
            void printing()
            {
                cout << "The total spending in the party is :: " << total << endl << endl;
            }
};
int main()
{
    capture david;
    david.get_coke();
    david.get_fanta();
    david.get_stoney();
    david.calc();
    david.printing();
    return 0;

}


