#include <iostream>

using namespace std;

int main()
{
    int age;
    


    cout << "Enter your age and click enter to proceed" << endl;
    cin >> age;
            if (age < 18)
                {goto nleggible;}
            else
                {cout << "You can cast your vote" << endl;}
            nleggible:
                cout << "Sorry your age does not allow you to cast any vote at the pollinng station" << endl << endl;
}