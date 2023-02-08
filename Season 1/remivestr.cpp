#include <iostream>

using namespace std;

int main()
{
    string name;
    cout <<"Enter your name and click enter\n";

    getline (cin, name);
    string name1;
    int i;
        for (i =0; i < name.length(); i++)
                {
                    if (name.at(i) != 'a')
                        {
                            name1 += name.at(i);
                        }
                }
    cout << "The new name is:::  " << name1;
}