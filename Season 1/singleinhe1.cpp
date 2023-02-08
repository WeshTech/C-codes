#include <iostream>
using namespace std;
class drinks
{
    public:
        int drinks;
        void drinksentry(){
        cout << "Enter the number of drinks taken" << endl;
        cin >> drinks;
        }
};
class cakess
{
    public:
        int cakeno;
        void cakeregistry()
        {
        cout << "Enter the number of cakes taken" << endl;
        cin >> cakeno;
        }
};
class total : public drinks , public cakess
{
    public:
    int totals, cakestotal, drinkstotal;
        int total_costs()
        {
            cakestotal = cakeno * 92;
            drinkstotal = drinks * 209;
            totals = cakestotal + drinkstotal;
            cout << endl << "The total cost for the party is::: \n\n\t\t\t" << totals;
        }
};
int main()
{
    cout << "Welcome to c++ analysis" << endl << endl;
    total david;
    david.drinksentry();
    david.cakeregistry();
    david.total_costs();
}