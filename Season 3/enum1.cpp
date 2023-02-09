#include <iostream>
using namespace std;
 enum week  {monday,tuesday,wednesday,thursday,friday,saturday,sunday};
int main()
{
   week day;
   day  = friday;
   cout <<"The chosen day is: " << day + 1 << endl;
}